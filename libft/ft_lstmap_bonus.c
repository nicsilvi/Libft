

#include "libft.h"

/* 
 * itera en lst y aplica *f, crea una lista nueva con el resultado. 
 *
 *return: nueva lista o null si falla malloc.
 */
t_list	*fm_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void*))
{
	t_list	*newlst;
	t_list	*newnodo;
	void	*result;

	if (!lst || !f || !del)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		result = f(lst->content);
		newnodo = ft_lstnew(result);
		if (!newnodo)
		{
			del(result);
			ft_lstclear(&newlst, (*del));
			return (NULL);
		}	
		ft_lstadd_back(&newlst, newnodo);
		lst = lst->next;
	}
	return (newlst);	
}
