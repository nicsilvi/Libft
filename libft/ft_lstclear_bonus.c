
#include "libft.h"

/* limpia de nodos la t_list utilizndo la función del. 
 *al eliminar el nodo actual borramos también la referencia al siguiente, por eso se utiliza una variable temporal
 *
 */

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	temp = *lst;
	if (!(*lst) || !del || !lst)
		return ;
	while (*lst)
	{
		tem = (*lst)->next;
		(del)((*lst)->content);
		*lst = temp;
		free(*lst);
	}
}
