/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcopoglu <bcopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 23:40:08 by bcopoglu          #+#    #+#             */
/*   Updated: 2023/09/10 16:12:48 by bcopoglu         ###   ########.fr       */
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
int		check_sorted(int *array, int size);
void	sa(t_stack *stack);
void	ra(t_stack *stack);
void	pa(t_stack *stack);
void	sb(t_stack *stack);
void	pb(t_stack *stack);
void	ss(t_stack *stack);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack);
void	ft_sort_three(t_stack *s);
int		ft_push(t_stack *stack, int len, int operation);
int		ft_sort(t_stack *stack, int size);
void	ft_sort_three(t_stack *s);
void	ft_sort_int_tmp(int *tmp_stack, int size);
int		ft_sort_small_b(t_stack *stack, int len);
void	ft_quicksort_3(t_stack *stack, int len);
int		ft_get_middle(int *pivot, int *stack_a, int size);
int		ft_quicksort_a(t_stack *stack, int len, int count);
int		ft_quicksort_b(t_stack *stack, int len, int count);

#endif
