/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 16:32:31 by fbelda-h          #+#    #+#             */
/*   Updated: 2021/03/12 16:06:54 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

int		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (dstsize == 0)
		return (ft_strlen(src));
	j = ft_strlen(dst);
	i = j;
	while (i < dstsize - 1 && src[i - j] != '\0')
	{
		dst[i] = src[i - j];
		i++;
	}
	if (i != j)
		dst[i] = '\0';
	return (min(j, dstsize) + ft_strlen(src));
}
