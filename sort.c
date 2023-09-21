/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcopoglu <bcopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:28:09 by bcopoglu          #+#    #+#             */
/*   Updated: 2023/09/21 16:42:31 by bcopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

int	ft_sort_small_b(t_stack *stack, int len)
{
	if (len == 1)
		pa(stack, 1);
	else if (len == 2)
	{
		if (stack->b[0] < stack->b[1])
			sb(stack, 1);
		while (len--)
			pa(stack, 1);
	}
	else if (len == 3)
	{
		while (len || !(stack->a[0] < stack->a[1] && stack->a[1] < stack->a[2]))
		{
			if (len == 1 && stack->a[0] > stack->a[1])
				sa(stack, 1);
			else if (len == 1 || (len >= 2 && stack->b[0] > stack->b[1])
				|| (len == 3 && stack->b[0] > stack->b[2]))
				len = ft_push(stack, len, 1);
			else
				sb(stack, 1);
		}
	}
	return (0);
}

void	ft_quicksort_3(t_stack *stack, int len)
{
	if (len == 3 && stack->size_a == 3)
		ft_sort_three(stack);
	else if (len == 2)
	{
		if (stack->a[0] > stack->a[1])
			sa(stack, 1);
	}
	else if (len == 3)
	{
		while (len != 3 || !(stack->a[0] < stack->a[1]
				&& stack->a[1] < stack->a[2]))
		{
			if (len == 3 && stack->a[0] > stack->a[1] && stack->a[2])
				sa(stack, 1);
			else if (len == 3 && !(stack->a[2] > stack->a[0]
					&& stack->a[2] > stack->a[1]))
				len = ft_push(stack, len, 0);
			else if (stack->a[0] > stack->a[1])
				sa(stack, 1);
			else if (len++)
				pa(stack, 1);
		}
	}
}

int	ft_get_middle(int *pivot, int *stack_a, int size)
{
	int	i;
	int	*tmp;

	tmp = (int *)malloc(sizeof(int) * size);
	if (!tmp)
		return (0);
	i = 0;
	while (i < size)
	{
		tmp[i] = stack_a[i];
		i++;
	}
	ft_sort_int_tmp(tmp, size);
	*pivot = tmp[size / 2];
	free(tmp);
	return (1);
}

int	ft_quicksort_a(t_stack *stack, int len, int count)
{
	int	pivot;
	int	items;

	if (check_sorted(stack->a, len) == 1)
		return (1);
	items = len;
	if (len <= 3)
	{
		ft_quicksort_3(stack, len);
		return (1);
	}
	if (!ft_get_middle(&pivot, stack->a, len))
		return (0);
	while (len != items / 2 + items % 2)
	{
		if (stack->a[0] < pivot && (len--))
			pb(stack, 1);
		else if (++count)
			ra(stack, 1);
	}
	while (items / 2 + items % 2 != stack->size_a && count--)
		rra(stack, 1);
	return (ft_quicksort_a(stack, items / 2 + items % 2, 0)
		&& ft_quicksort_b(stack, items / 2, 0));
	return (1);
}

int	ft_quicksort_b(t_stack *stack, int len, int count)
{
	int	pivot;
	int	items;

	if (!count && check_sorted(stack->b, len) == 1)
		while (len--)
			pa(stack, 1);
	if (len <= 3)
	{
		ft_sort_small_b(stack, len);
		return (1);
	}
	items = len;
	if (!ft_get_middle(&pivot, stack->b, len))
		return (0);
	while (len != items / 2)
	{
		if (stack->b[0] >= pivot && len--)
			pa(stack, 1);
		else if (++count)
			rrb(stack, 1);
	}
	while (items / 2 != stack->size_b && count--)
		rrb(stack, 1);
	return (ft_quicksort_a(stack, items / 2 + items % 2, 0)
		&& ft_quicksort_b(stack, items / 2, 0));
}
