/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 20:37:08 by fbelda-h          #+#    #+#             */
/*   Updated: 2021/03/06 11:48:06 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_in_set(char c, char const *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		mini(char const *s1, char const *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (is_in_set(s1[i], s2) == 0)
			break ;
		i++;
	}
	return (i);
}

int		max(char const *s1, char const *s2)
{
	int		j;

	j = ft_strlen(s1) - 1;
	while (j > 0)
	{
		if (is_in_set(s1[j], s2) == 0)
			break ;
		j--;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *s2)
{
	char	*r;
	int		i;
	int		j;
	int		k;

	i = mini(s1, s2);
	if (i == ft_strlen(s1))
	{
		if (!(r = (char *)malloc(sizeof(char))))
			return (NULL);
		r[0] = 0;
		return (r);
	}
	j = max(s1, s2);
	if (!(r = (char *)malloc(sizeof(char) * (j - i + 2))))
		return (NULL);
	j = max(s1, s2);
	k = 0;
	while (i <= j + 1)
	{
		r[k] = i < j + 1 ? s1[i] : '\0';
		k++;
		i++;
	}
	return (r);
}
