/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:22:30 by smercado          #+#    #+#             */
/*   Updated: 2024/06/20 16:25:42 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* añade un nuevo elemento al principio de la lista. **list es un puntero al primer elemento de la lista
 * new es el elemento a añadir. 
 * mira si list o new esta vacío. 
 
  */
void	ft_lstadd_front_bonus(t_list **lst, t_list *new)
{
	if ((!lst) || (!new))
		return ;
	new->next = *lst;
	*lst = new;
}
