/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcopoglu <bcopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:15:28 by bcopoglu          #+#    #+#             */
/*   Updated: 2023/07/06 17:26:11 by bcopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*str1;
	unsigned const char	*str2;

	str1 = (unsigned char *)dst;
	str2 = (unsigned const char *)src;
	i = 0;
	if (str1 == str2)
		return (dst);
	if (str1 > str2)
	{
		while (len > 0)
		{
			len--;
			str1[len] = str2[len];
		}
	}
	while (i < len)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dst);
}
