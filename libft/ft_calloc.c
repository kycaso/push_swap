/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 17:32:58 by fbelda-h          #+#    #+#             */
/*   Updated: 2021/03/12 16:02:40 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*a;
	size_t	i;

	i = 0;
	if (!(a = (char *)malloc(count * size)))
		return (NULL);
	while (i < count * size)
	{
		a[i] = '\0';
		i++;
	}
	return ((void *)a);
}
