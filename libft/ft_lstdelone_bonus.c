

#include "libft.h"

/* libera la memoria del nodo *lst
 * del es la función indicada por puntero que se encarga de liberar el contenido del nodo. 
 * la memoria de next no debe liberarse.
 * luego hay que hacer un free a lst. 
 */
void	ft_lstdelone(t_lst *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	(del)(lst->content);
	free(lst);
	*lst = NULL;
}
