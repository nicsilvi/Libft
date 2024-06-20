/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:05:19 by smercado          #+#    #+#             */
/*   Updated: 2024/06/19 16:51:12 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ss1;
	const unsigned char	*ss2;
	size_t				i;
	int					result;

	i = 0;
	result = 0;
	ss1 = (const unsigned char *) s1;
	ss2 = (const unsigned char *) s2;
	if (n == 0)
		return (0);
	while (ss1[i] == ss2[i] && ss1[i] != '\0' && ss2[i] != '\0' && i < n -1)
		i++;
	result = ((int)ss1[i] - (int)ss2[i]);
	return (result);
}
