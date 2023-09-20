/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcopoglu <bcopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:48:38 by bcopoglu          #+#    #+#             */
/*   Updated: 2023/09/19 14:38:52 by bcopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>
#include <stdio.h>

void	ss(t_stack *stack, int print)
{
	int	swap;

	swap = 0;
	if (stack->size_a < 2)
	{
		write (1, "A few argument", 14);
		return ;
	}
	swap = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = swap;
	swap = 0;
	if (stack->size_b < 2)
		return ;
	swap = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = swap;
	if (print == 1)
		write (1, "ss\n", 3);
}

void	rr(t_stack *stack, int print)
{
	int	i;
	int	swap;

	i = 0;
	swap = stack->a[i];
	i++;
	while (i < stack->size_a)
	{
		stack->a[i - 1] = stack->a[i];
		i++;
	}
	stack->a[i - 1] = swap;
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
		write (1, "rr\n", 3);
}

void	rrr(t_stack *stack, int print)
{
	int	i;
	int	swap;

	swap = stack->a[stack->size_a - 1];
	i = stack->size_a;
	while (--i >= 0)
		stack->a[i + 1] = stack->a[i];
	stack->a[0] = swap;
	swap = stack->b[stack->size_b - 1];
	i = stack->size_b;
	while (--i >= 0)
		stack->b[i + 1] = stack->b[i];
	stack->b[0] = swap;
	if (print == 1)
		write (1, "rrr\n", 4);
}
