/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 16:37:32 by fbelda-h          #+#    #+#             */
/*   Updated: 2021/01/29 18:27:55 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	aux_strnstr(const char *h, const char *n, size_t len, size_t i)
{
	size_t	k;
	size_t	j;

	k = i;
	j = ft_strlen(n);
	if (h[i] == n[0])
	{
		while (h[i] && i < len && (int)(i - k) < ft_strlen(n))
		{
			if (h[i] == n[ft_strlen(n) - j])
				j--;
			i++;
		}
	}
	return (j);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i])
	{
		if (aux_strnstr(haystack, needle, len, i) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
