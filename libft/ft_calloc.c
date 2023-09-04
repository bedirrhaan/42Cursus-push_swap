/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcopoglu <bcopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 10:18:34 by bcopoglu          #+#    #+#             */
/*   Updated: 2023/07/09 17:30:59 by bcopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*mem;

	total_size = size * count;
	mem = malloc(total_size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, total_size);
	return (mem);
}
