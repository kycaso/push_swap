/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 16:26:58 by fbelda-h          #+#    #+#             */
/*   Updated: 2021/03/12 16:03:18 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*aux;
	unsigned char	*aux2;

	i = 0;
	aux = dst;
	aux2 = (unsigned char *)src;
	while (i < n)
	{
		aux[i] = aux2[i];
		if (aux2[i] == (unsigned char)c)
			return (&dst[i + 1]);
		i++;
	}
	return (0);
}
