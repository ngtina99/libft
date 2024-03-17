/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:22:25 by thuy-ngu          #+#    #+#             */
/*   Updated: 2023/10/21 03:24:19 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*nlast;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	nlast = ft_lstlast(*lst);
	nlast->next = new;
}
/*int main()
{
	t_list	*list;

	list = NULL;
	char *s1 = "Content 1";
	char *s2 = "Content 2";
	char *s3 = "Content 3";
    char *s4 = "Content 4";

	t_list *n1 = ft_lstnew(s1);
	t_list *n2 = ft_lstnew(s2);
	t_list *n3 = ft_lstnew(s3);
	t_list *n4 = ft_lstnew(s4);

	ft_lstadd_back(&list, n4);
	ft_lstadd_back(&list, n3);
	ft_lstadd_back(&list, n2);
	ft_lstadd_back(&list, n1);
	while(list)
	{
	 	printf("%s\n", (char *)list->content);
	 	list = list->next;
	}
	free(n4);
	free(n3);
	free(n2);
	free(n1);
}*/