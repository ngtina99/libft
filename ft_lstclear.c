/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:22:25 by thuy-ngu          #+#    #+#             */
/*   Updated: 2023/10/21 21:12:08 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void	ft_del(void *ptr)
{
	ptr = NULL;
	return ;
}*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!*lst)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
/*int	main()
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
	while (list)
	{
		printf("%s\n", (char *)list->content);
		list = list->next;
	}
	list = n1;
	ft_lstclear(&list, ft_del);
}*/