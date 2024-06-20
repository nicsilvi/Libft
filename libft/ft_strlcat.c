/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:54:37 by smercado          #+#    #+#             */
/*   Updated: 2024/06/20 11:37:09 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <libft.h>

/* concatena cadenas y garantiza que no se escriba fuera del limite
del bufer. la cadena siempre tienq que acabar en nulo. 
src se concatena en dest, dest debe ser lo suficientemente grande (size). 
return> devuelve el tam que intento crear (src + dest);
*/
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if ((unsigned int)ft_strlen(dest) >= size)
		return (ft_strlen(src) + size);
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[j]));
}
/*
int	main(void)
{
	unsigned int res;
	char *dest;

	memset(dest, 'r', 15);
	dest[15] = '\0';
	res = ft_strlcat(dest, "jthgfgfg", 6);
	printf("%s", dest);
	printf("%u", res);
	return (0);
}*/
