/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 16:25:59 by fbelda-h          #+#    #+#             */
/*   Updated: 2021/03/12 16:06:21 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*aux;
	unsigned char	*aux2;
	size_t			i;

	if (!dst && !src)
		return (NULL);
	aux = dst;
	aux2 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		aux[i] = aux2[i];
		i++;
	}
	return (dst);
}
