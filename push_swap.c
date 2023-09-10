/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcopoglu <bcopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 23:39:55 by bcopoglu          #+#    #+#             */
/*   Updated: 2023/09/10 16:13:04 by bcopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_push_swap(char **av)
{
	t_stack	stack;
	int		size;

	stack.size_a = ft_ps_strlen(av);
	stack.a = ft_ps_atoi(av, stack.size_a);
	if (!stack.a)
		return ;
	stack.size_b = 0;
	stack.b = malloc(sizeof(int) * stack.size_a);
	if (!stack.b)
		return ;
	size = stack.size_a;
	ft_check_repeat(stack.a, stack.size_a);
	ft_sort(&stack, size);
	free (stack.a);
	free (stack.b);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		av++;
		if (ac == 2)
			av = ft_split (*av, ' ');
		ft_push_swap(av);
	}
	return (0);
}
