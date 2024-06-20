/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:53:46 by smercado          #+#    #+#             */
/*   Updated: 2024/06/19 15:37:05 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
/*
separa S en un array de strings. cada palabra se delimita con c
devuelve el **array o null si malloc falla
el array debe acabar en NULL.
*/

static int	ft_count_letters(char const*s, char c, int index)
{
	int	count;

	count = 0;
	while ((s[index] != c) && (s[index] != '\0'))
	{
		count++;
		index++;
	}
	return (count);
}

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			words++;
		i++;
	}
	return (words);
}

char	*ft_makecpyarray(char const *s, int lettercounter, int start)
{
	char	*array;
	int		i;

	i = 0;
	array = (char *)malloc(sizeof(char) * (lettercounter + 1));
	if (!array)
		return (NULL);
	while (lettercounter--)
	{
		array[i] = s[start + i];
		i++;
	}
	array[i] = '\0';
	return (array);
}

char	**ft_makearray(char const *s, char c, char **array)
{
	int	i;
	int	k;
	int	j;
	int	lettercounter;

	i = 0;
	j = 0;
	k = 0;
	while (k < ft_count_words(s, c))
	{
		if (s[j] != c && s[j] != '\0')
			j++;
		else if (s[j] == c || s[j] == '\0')
		{
			lettercounter = ft_count_letters(s, c, i);
			array[k] = ft_makecpyarray(s, lettercounter, i);
			if (!array)
				free(array);
			i = i + lettercounter + 1;
			k++;
		}
	}
	array[k] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		words;

	words = ft_count_words(s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	array = ft_makearray(s, c, array);
	return (array);
}
/*
int main()
 {
     // Cadena de prueba
     char *s1 = "holacqueectalscesta";
    char **array;
    int i = 0;

     array = ft_split(s1, 'c');

     // Imprimir el resultado
     if (array)
     {
       while (*array[i])
       {
         printf("string: %s\n", array[i]);
         free(array[i]);
         i++;
        }
     free(array);
     }
     else
     {
         printf("Fail.\n");
     }
     return (0);
 }

 void    ft_bzero(void *s, size_t n)
{
    size_t    i;

    i = 0;
    while (i < n)
    {
        ((unsigned char *)s)[i] = '\0';
        i++;
    }
}*/
