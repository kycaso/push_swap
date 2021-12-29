/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 20:09:52 by fbelda-h          #+#    #+#             */
/*   Updated: 2021/03/19 17:53:53 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		number_of_words(char const *s, char c)
{
	int		i;
	int		k;

	k = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
			k++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (k);
}

int		gaps_maker(char **part, char const *s, char c)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i] != '\0')
	{
		j = 0;
		while (s[i] != '\0' && s[i] != c)
		{
			i++;
			j++;
		}
		part[k] = ft_substr(s, i - j, j);
		while (s[i] == c && s[i] != '\0')
			i++;
		k++;
	}
	return (k);
}

char	**ft_split(char const *s, char c)
{
	int		n;
	char	**part;

	if (!s)
		return (NULL);
	n = number_of_words(s, c);
	if (!(part = (char **)malloc(sizeof(char *) * (n + 1))))
		return (NULL);
	if (gaps_maker(part, s, c) != n)
		return (NULL);
	part[n] = NULL;
	return (part);
}
