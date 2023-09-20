/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcopoglu <bcopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 23:40:08 by bcopoglu          #+#    #+#             */
/*   Updated: 2023/09/20 23:15:43 by bcopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct p_stack
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
}		t_stack;

int		ft_strcmp(char *s1, char *s2);
int		ft_ps_strlen(char **array);
void	ft_push_swap(char **array);
int		*ft_ps_atoi(char **array, int size);
void	ft_check_repeat(int *stack, int size);
int		check_list(t_stack *stack);
void	ft_error(int *stack);
int		check_sorted(int *array, int size);
void	sa(t_stack *stack, int print);
void	ra(t_stack *stack, int print);
void	rb(t_stack *stack, int print);
void	pa(t_stack *stack, int print);
void	sb(t_stack *stack, int print);
void	pb(t_stack *stack, int print);
void	ss(t_stack *stack, int print);
void	rr(t_stack *stack, int print);
void	rra(t_stack *stack, int print);
void	rrb(t_stack *stack, int print);
void	rrr(t_stack *stack, int print);
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
//checker
void	ft_checker(char **av);
void	ft_getchecker(t_stack *stack);
void	free_error(t_stack *stack, int num);
void	exec_instruction(t_stack *stack, char *instruction);
//get_next_line
char	*get_next_line(int fd);

#endif
