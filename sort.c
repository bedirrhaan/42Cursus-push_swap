/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcopoglu <bcopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:21:42 by bcopoglu          #+#    #+#             */
/*   Updated: 2023/09/05 16:55:35 by bcopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	quicksort_3a(t_stack *stack)
{
	if (stack->size_a == 3)
	{
		if (stack->a[0] > stack->a[1] && stack->a[1] > stack->a[2])
		{
			ra(stack);
			sa(stack);
		}
		else if (stack->a[0] > stack->a[2] && stack->a[2] > stack->a[1])
		{
			ra(stack);
		}
		else if (stack->a[1] > stack->a[2] && stack->a[2] > stack->a[0])
		{
			rra(stack);
			sa(stack);
		}
		else if (stack->a[1] > stack->a[0] && stack->a[0] > stack->a[2])
		{
			rra(stack);
		}
		else if (stack->a[2] > stack->a[0] && stack->a[0] > stack->a[1])
		{
			sa(stack);
		}
	}
}

void	quicksort_3b(t_stack *stack)
{
	if (stack->size_b == 3)
	{
		if (stack->b[0] > stack->b[1] && stack->b[1] > stack->b[2])
		{
			ra(stack);
			sa(stack);
		}
		else if (stack->b[0] > stack->b[2] && stack->b[2] > stack->b[1])
		{
			ra(stack);
		}
		else if (stack->b[1] > stack->b[2] && stack->b[2] > stack->b[0])
		{
			rra(stack);
			sa(stack);
		}
		else if (stack->b[1] > stack->b[0] && stack->b[0] > stack->b[2])
		{
			rra(stack);
		}
		else if (stack->b[2] > stack->b[0] && stack->b[0] > stack->b[1])
		{
			sa(stack);
		}
	}
}
