/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:22:25 by thuy-ngu          #+#    #+#             */
/*   Updated: 2023/10/22 00:49:32 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newnode;

	newlist = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		newnode = ft_lstnew(f(lst->content));
		if (!newnode)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newnode);
		lst = lst->next;
	}
	return (newlist);
}
/*static void	*ft_test(void ptr*)
{
    return (ft_split(ptr, ' ')[1]);
}

int	main()
{
	t_list *list = NULL;
	char *s1 = "Content 1";
	char *s2 = "Content 2";
	char *s3 = "Content 3";
	char *s4 = "Content 4";

	t_list *n1 = ft_lstnew(s1);
	t_list *n2 = ft_lstnew(s2);
	t_list *n3 = ft_lstnew(s3);
	t_list *n4 = ft_lstnew(s4);

	list =  n1;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;

	t_list *newlist = ft_lstmap(list, ft_test, free);
	while(newlist)
	{
    	printf("%s\n", (char *)newlist->content);
		newlist = newlist->next;
	}
}*/