/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:24:51 by smercado          #+#    #+#             */
/*   Updated: 2024/06/20 16:12:32 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*copia n bytes de src en dest y grantiza qe no se solapen (no como memcpy).
return > puntero a dest.
src y dest son posiciones de memoria, hay que ver cual esta delante 
para superponer de manera segura.
(src y dest pueden ser la misma variable+n para mover una palabra sobre otra).

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if ((unsigned char *)dest > (unsigned char *)src)
	{
		i = n;
		while (n--)
			((char *)dest)[n] = ((char *)src)[n];
	}
	else if ((unsigned char *)dest < (unsigned char *)src)
	{
		while (i++ < n)
			((char *)dest)[i] = ((char *)src)[i];
		((char *)dest)[n] = '\0';
	}
	return (dest);
}
/*
int	main(void)
{
	char dest[13];
	char *src = "rem ipssum dolor sit a";
	char *ret;

	ret = ft_memmove(dest, src, 10);
	printf("%s\n", ret);
	return (0);
}*/
