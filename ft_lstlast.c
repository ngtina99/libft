/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:22:25 by thuy-ngu          #+#    #+#             */
/*   Updated: 2023/10/21 03:07:34 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*int	main()
{
	t_list *list;
	char *s1 = "content 1";
	char *s2 = "content 2";
	char *s3 = "content 3";
	t_list* n1 = ft_lstnew(s1);
	t_list* n2 = ft_lstnew(s2);	
	t_list* n3 = ft_lstnew(s3);
	list = n1;
	n1->next = n2;
	n2->next = n3;
	n3->next = NULL;

	t_list *last = ft_lstlast(list);
	printf("%s\n", (char *)last->content);
	free(n1);
	free(n2);
	free(n3);
}*/