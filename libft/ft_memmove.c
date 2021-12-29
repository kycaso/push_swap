/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 16:28:50 by fbelda-h          #+#    #+#             */
/*   Updated: 2021/01/29 18:15:48 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*aux;
	char	*aux2;

	aux = (char *)dst;
	aux2 = (char *)src;
	if (aux > aux2)
	{
		while (len--)
			aux[len] = aux2[len];
	}
	else if (aux < aux2)
		ft_memcpy(dst, src, len);
	return (dst);
}
