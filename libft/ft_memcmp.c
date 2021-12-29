/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 17:31:30 by fbelda-h          #+#    #+#             */
/*   Updated: 2021/01/29 18:13:55 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*aux;
	unsigned char	*aux2;
	size_t			i;

	i = 0;
	aux = (unsigned char *)s1;
	aux2 = (unsigned char *)s2;
	while (i < n)
	{
		if (aux[i] != aux2[i])
			return (aux[i] - aux2[i]);
		i++;
	}
	return (0);
}
