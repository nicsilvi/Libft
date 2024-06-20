/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 13:24:29 by smercado          #+#    #+#             */
/*   Updated: 2024/06/20 16:32:51 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include <stdio.h>

/* crea una subcadena desde el indice start hasta tamano len. 
copia y devuelve puntero a la subcadena o null si falla malloc. 
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	str = (char *)malloc(sizeof(char) * (len +1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int main()
{
    // Cadena de prueba
    const char *original = "Hello, World!";
    unsigned int start = 7;
    size_t len = 5;

    // Llamar a ft_substr
    char *substring = ft_substr(original, start, len);

    // Imprimir el resultado
    if (substring)
    {
        printf("Substring: %s\n", substring);
        free(substring);  // Liberar memoria asignada
    }
    else
    {
        printf("Failed to allocate memory for substring.\n");
    }

    return 0;
}*/
