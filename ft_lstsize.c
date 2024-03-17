/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:22:25 by thuy-ngu          #+#    #+#             */
/*   Updated: 2023/10/21 03:08:06 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*int main()
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

	int size = ft_lstsize(list);
	printf("%d\n", size);
	free(n1);
	free(n2);
	free(n3);
}*/