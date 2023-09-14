/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pillesca <pillesca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:00:16 by pillesca          #+#    #+#             */
/*   Updated: 2023/09/14 13:24:26 by pillesca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Funcion que devuelve la ultima ocurrencia de un caracter en una cadena
// si no lo encuentra devuelve 0

char	*strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = 0;
	while (*s)
	{
		if (*s == (char)c)
			ptr = (char *)s;
		s++;
	}
	if (*s == (char)c)
		ptr = (char *)s;
	return (ptr);
}
