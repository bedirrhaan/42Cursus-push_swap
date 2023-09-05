/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcopoglu <bcopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 23:40:08 by bcopoglu          #+#    #+#             */
/*   Updated: 2023/09/05 21:31:58 by bcopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct p_stack
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
}		t_stack;

int		ft_ps_strlen(char **array);
void	ft_push_swap(char **array);
int		*ft_ps_atoi(char **array, int size);
void	ft_check_repeat(int *stack, int size);
int		check_list(t_stack *stack);
void	ft_error(int *stack);
int	check_sorted(int *array, int size);
void	sa(t_stack	*stack);
void	ra(t_stack *stack);
void	pa(t_stack *stack);
void	sb(t_stack *stack);
void	pb(t_stack *stack);
void	ss(t_stack *stack);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack);
void	ft_sort_three(t_stack *s);


#endif
