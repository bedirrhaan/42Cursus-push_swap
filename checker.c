/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcopoglu <bcopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 19:33:52 by bcopoglu          #+#    #+#             */
/*   Updated: 2023/09/20 20:40:53 by bcopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_error(t_stack *stack, int num)
{
	free(stack->a);
	free(stack->b);
	if (num)
		write (1, "Error\n", 6);
	exit(1);
}

void	exec_instruction(t_stack *stack, char *instruction)
{
	if (!ft_strcmp(instruction, "sa\n"))
		sa(stack, 0);
	else if (!ft_strcmp(instruction, "sb\n"))
		sb(stack, 0);
	else if (!ft_strcmp(instruction, "ss\n"))
		ss(stack, 0);
	else if (!ft_strcmp(instruction, "ra\n"))
		ra(stack, 0);
	else if (!ft_strcmp(instruction, "rb\n"))
		rb(stack, 0);
	else if (!ft_strcmp(instruction, "rr\n"))
		rr(stack, 0);
	else if (!ft_strcmp(instruction, "rra\n"))
		rra(stack, 0);
	else if (!ft_strcmp(instruction, "rrb\n"))
		rrb(stack, 0);
	else if (!ft_strcmp(instruction, "rrr\n"))
		rrr(stack, 0);
	else if (!ft_strcmp(instruction, "pa\n"))
		pa(stack, 0);
	else if (!ft_strcmp(instruction, "pb\n"))
		pb(stack, 0);
	else
		free_error(stack, 1);
}

void	ft_getchecker(t_stack *stack)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
		exec_instruction(stack, str);
		free(str);
		str = get_next_line(0);
	}
	if (check_sorted(stack->a, stack->size_a) && stack->size_b == 0)
		write(1, "\033[0;32mOK\n", 10);
	else
		write(1, "\033[0;32mKO\n", 10);
	free_error(stack, 0);
}

void	ft_checker(char **av)
{
	t_stack	stack;
	int		size;

	stack.size_a = ft_ps_strlen(av);
	stack.a = ft_ps_atoi(av, stack.size_a);
	if (!stack.a)
	{
		free(stack.a);
		return ;
	}
	stack.size_b = 0;
	stack.b = malloc(sizeof(int) * stack.size_a);
	if (!stack.b)
	{
		free (stack.a);
		free (stack.b);
		return ;
	}
	size = stack.size_a;
	ft_check_repeat(stack.a, size);
	ft_getchecker(&stack);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		av++;
		if (ac == 2)
			av = ft_split(*av, ' ');
		ft_checker(av);
	}
	return (0);
}
