/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelda-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:44:20 by fbelda-h          #+#    #+#             */
/*   Updated: 2021/02/26 16:55:45 by fbelda-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Escribe el caracter en el fd indicado, 0 entrada estandar, 1 salida estandar
** 2 salida de error
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
