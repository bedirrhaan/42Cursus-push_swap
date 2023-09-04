/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcopoglu <bcopoglu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 10:39:01 by bcopoglu          #+#    #+#             */
/*   Updated: 2023/07/10 17:00:36 by bcopoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	slen;

	slen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= slen)
	{
		str = (char *)malloc(1 * sizeof(char));
		if (!str)
			return (NULL);
		*str = '\0';
	}
	else
	{
		if (slen - start < len)
			len = slen - start;
		str = (char *)malloc((len + 1) * sizeof(char));
		if (!str)
			return (NULL);
		ft_strlcpy(str, (s + start), len + 1);
	}
	return (str);
}
