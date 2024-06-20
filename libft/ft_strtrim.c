/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:40:44 by smercado          #+#    #+#             */
/*   Updated: 2024/06/20 09:00:45 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

/* elimina en s1 los caracteres encontrados en set: 
recorre desde el inicio y desde el final hasta que encuentra algo que no es set. 
 devuelve la string resultante con una reserva de malloc. 
 ej> "abababMy name is Simonbababab" set: ab = "my name is Simon"
*/
static int	ft_trueinset(char const *set, char c);

static int	ft_trueinset(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		start;
	int		end;
	int		len;

	start = 0;
	end = ft_strlen((char *)s1) - 1;
	if (!s1)
	{
		new = ft_strdup("");
		return (new);
	}
	while (ft_trueinset(set, s1[start]))
		start++;
	while (ft_trueinset(set, s1[end]))
		end--;
	len = ((ft_strlen((char *)s1) - start) - (ft_strlen((char *)s1) - end) + 1);
	new = malloc(sizeof(char) * len + 1);
	if (!new)
		return (NULL);
	new = ft_substr(s1, start, len);
	return (new);
}
/*

int main()
 {
     // Cadena de prueba
     const char *s1 = "lorem \n ipsum \t dolor \n sit \t amet";
     const char *set = " ";

     char *str = ft_strtrim(s1, set);

     // Imprimir el resultado
	 if (str)
     {
         printf("string: %s\n", str);
         free(str);  // Liberar memoria asignada
     }
     else
     {
         printf("Fail.\n");
     }

     return 0;
 }
 int ft_strlen(char *str)
 {
     int len = 0;
     while (str[len])
         len++;
     return len;
  }

  char    *ft_strdup(const char *s)
{
    char    *snew;
    int        i;
    int        len;

    i = 0;
    len = ft_strlen((char *)s);
    snew = (char *)malloc(sizeof(char) * (len + 1));
    if (!snew)
        return (NULL);
    while (s[i] != '\0')
    {
        snew[i] = s[i];
        i++;
    }
    snew[i] = '\0';
    return (snew);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t    i;

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
    return (str);
}*/
