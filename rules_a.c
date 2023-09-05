/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcopoglu <bcopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:57:39 by bcopoglu          #+#    #+#             */
/*   Updated: 2023/09/05 16:10:43 by bcopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include <unistd.h>
#include <stdio.h>

void	sa(t_stack	*stack)
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
	write (1, "sa\n", 3);
}

void	pa(t_stack *stack)
{
	int	i;

	if (stack->size_b != 0)
	{
		stack->size_a += 1;
		i = stack->size_a;
		while (--i > 0)
			stack->a[i] = stack->a[i - 1];
		stack->a[0] = stack->b[0];
		i = 0;
		stack->size_b -= 1;
		while (i < stack->size_b)
		{
			stack->b[i] = stack->b[i + 1];
			i++;
		}
		write (1, "pa\n", 3);
	}
}

void	ra(t_stack *stack)
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
	write (1, "ra\n", 3);
}

void	rra(t_stack *stack)
{
	int	i;
	int	swap;

	swap = stack->a[stack->size_a - 1];
	i = stack->size_a;
	while (--i >= 0)
		stack->a[i + 1] = stack->a[i];
	stack->a[0] = swap;
	write (1, "rra\n", 4);
}
