/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 16:30:09 by fbelda-h          #+#    #+#             */
/*   Updated: 2021/01/29 18:19:59 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 1;
	while (i < dstsize && src[i - 1])
	{
		dst[i - 1] = src[i - 1];
		i++;
	}
	if (dstsize != 0)
	{
		dst[i - 1] = '\0';
	}
	return (ft_strlen(src));
}
