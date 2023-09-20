/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcopoglu <bcopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:13:09 by bcopoglu          #+#    #+#             */
/*   Updated: 2023/09/20 23:10:13 by bcopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	sb(t_stack *stack, int print)
{
	int	swap;

	swap = 0;
	if (stack->size_b < 2)
		return ;
	swap = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = swap;
	if (print == 1)
		write (1, "sb\n", 3);
}

void	pb(t_stack *stack, int print)
{
	int	i;

	if (stack->size_a != 0)
	{
		stack->size_b += 1;
		i = stack->size_b;
		while (--i > 0)
			stack->b[i] = stack->b[i - 1];
		stack->b[0] = stack->a[0];
		i = 0;
		stack->size_a -= 1;
		while (i < stack->size_a)
		{
			stack->a[i] = stack->a[i + 1];
			i++;
		}
		if (print == 1)
			write (1, "pb\n", 3);
	}
}

void	rb(t_stack *stack, int print)
{
	int	i;
	int	swap;

	i = 0;
	swap = stack->b[i];
	i++;
	while (i < stack->size_b)
	{
		stack->b[i - 1] = stack->b[i];
		i++;
	}
	stack->b[i - 1] = swap;
	if (print == 1)
		write (1, "rb\n", 3);
}

void	rrb(t_stack *stack, int print)
{
	int	i;
	int	swap;

	swap = stack->b[stack->size_b - 1];
	i = stack->size_b;
	while (--i >= 0)
		stack->b[i + 1] = stack->b[i];
	stack->b[0] = swap;
	if (print == 1)
		write (1, "rrb\n", 4);
}
