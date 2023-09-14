/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:29:21 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/14 13:31:51 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

// Función que busca un caracter c en los primeros n caracteres de la cadena s
// devuelve un puntero al caracter encontrado o NULL si no lo encuentra

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n > 0 && *str)
	{
		if (*str == (unsigned char)c)
			return (str);
		n--;
		str++;
	}
	if (n > 0 && *str == (unsigned char)c)
		return (str);
	return (NULL);
}
