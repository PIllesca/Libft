/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:56:07 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/14 13:23:07 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

// Función que busca la primera aparición de la cadena needle en la cadena
// haystack en los primeros len caracteres de la cadena haystack.
// Devuelve un puntero a la primera aparición de la cadena needle en la cadena
// haystack, puntero a la cadena haystack completa si needle es vacía o NULL, o
// NULL si no la encuentra, si len es 0 o si la cadena haystack es NULL o vacía

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*str;
	const char	*to_find;

	if (needle == NULL || *needle == '\0')
		return ((char *)haystack);
	if (len == 0 || *haystack == '\0' || haystack == NULL)
		return (NULL);
	while (len > 0 && *haystack)
	{
		str = haystack;
		to_find = needle;
		while (*str == *to_find && *str && *to_find)
		{
			str++;
			to_find++;
		}
		if (*to_find == '\0')
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
