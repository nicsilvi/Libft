

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if (!list)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
