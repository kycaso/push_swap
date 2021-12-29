/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 21:44:05 by fbelda-h          #+#    #+#             */
/*   Updated: 2021/03/06 11:46:16 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*number(int n)
{
	int		i;
	char	*s;
	int		pn;

	pn = n;
	i = 2;
	while (pn / 10 != 0)
	{
		pn = pn / 10;
		i++;
	}
	i = n < 0 ? i + 1 : i;
	n = n < 0 ? -n : n;
	if (!(s = (char *)malloc(sizeof(char) * (i))))
		return (NULL);
	s[--i] = '\0';
	s[0] = n < 0;
	while (--i >= 0)
	{
		s[i] = n % 10 + '0';
		n = n / 10;
	}
	s[0] = s[0] == '0' ? '-' : s[0];
	return (s);
}

char	*minimal(void)
{
	char *s;

	if (!(s = (char *)malloc(sizeof(char) * 12)))
		return (NULL);
	s[0] = '-';
	s[1] = '2';
	s[2] = '1';
	s[3] = '4';
	s[4] = '7';
	s[5] = '4';
	s[6] = '8';
	s[7] = '3';
	s[8] = '6';
	s[9] = '4';
	s[10] = '8';
	s[11] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	char *s;

	if (n == 0)
	{
		if (!(s = (char *)malloc(sizeof(char) * 2)))
			return (NULL);
		s[0] = '0';
		s[1] = '\0';
		return (s);
	}
	else if (n == -2147483648)
	{
		return (minimal());
	}
	return (number(n));
}
