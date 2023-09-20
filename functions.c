/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcopoglu <bcopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:57:46 by bcopoglu          #+#    #+#             */
/*   Updated: 2023/09/20 20:39:59 by bcopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"
#include "libft/libft.h"

void	ft_error(int *stack)
{
	free (stack);
	write (1, "Error", 5);
	exit(1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		++i;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	ft_ps_strlen(char **array)
{
	int	i;

	i = 0;
	while (array[i])
		i++;
	return (i);
}

int	*ft_ps_atoi(char **array, int size)
{
	int		i;
	t_stack	atoi;

	atoi.a = malloc(sizeof(int) * size);
	if (!atoi.a)
		return (NULL);
	i = 0;
	while (array[i])
	{
		atoi.a[i] = ft_atoi(array[i]);
		i++;
	}
	return (atoi.a);
}

void	ft_check_repeat(int *stack, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < size)
	{
		while (j < size)
		{
			if (stack[i] == stack[j])
				ft_error(stack);
			j++;
		}
		i++;
		j = i + 1;
	}
}
