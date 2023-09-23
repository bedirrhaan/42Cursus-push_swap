/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcopoglu <bcopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:28:31 by bcopoglu          #+#    #+#             */
/*   Updated: 2023/09/23 13:03:43 by bcopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
}	t_stack;

//checker
void	ft_checker(char **av);
void	ft_getchecker(t_stack *stack);
void	free_error(t_stack *stack, int num);
void	exec_instruction(t_stack *stack, char *instruction);
//get_next_line
char	*get_next_line(int fd);
//functions1
int		ft_strcmp(char *s1, char *s2);
void	ft_error(int *stack);
int		ft_ps_strlen(char **str);
int		ft_ps_atoi(char *str, int *stack);
void	ft_check_repeat(int *stack, int size);
//functions2
int		ft_checked_sorted(int *stack_a, int size, int flag);
int		ft_sort(t_stack *stack, int size);
void	ft_sort_three(t_stack *s);
void	ft_sort_int_tmp(int *tmp_stack, int size);
//functions3
void	ft_quicksort_3(t_stack *stack, int len);
int		ft_sort_small_b(t_stack *s, int len);
int		ft_push(t_stack *stack, int len, int operation);
int		ft_get_middle(int *pivot, int *stack_a, int size);
int		ft_quicksort_a(t_stack *stack, int len, int count);
int		ft_quicksort_b(t_stack *stack, int len, int count);
//rules a
void	sa(t_stack *stack, int print);
void	rra(t_stack *stack, int print);
void	ra(t_stack *stack, int print);
void	pa(t_stack *stack, int print);
//rules b
void	pb(t_stack *stack, int print);
void	sb(t_stack	*stack, int print);
void	rb(t_stack	*stack, int print);
void	rrb(t_stack *stack, int print);
//rules 2
void	ss(t_stack	*stack, int print);
void	rr(t_stack	*stack, int print);
void	rrr(t_stack *stack, int print);

void	ft_push_swap(char **av);

#endif
