/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:03:02 by smercado          #+#    #+#             */
/*   Updated: 2024/06/20 16:31:37 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
compara dos cadenas hasta n max. Si s1 es menor devuelve negativo, 
si s1 es mayor, devuelve positivo, si son iguales 0.
para evitar car'acteres especiales, compara con unsigned char!

*/

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
	{
		if (s1[i] == '\0')
			return (-1);
		else
			return (1);
	}
	return (0);
}
