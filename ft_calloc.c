/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:22:25 by thuy-ngu          #+#    #+#             */
/*   Updated: 2023/10/13 21:12:24 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t bytes)
{
	void	*ptr;

	ptr = malloc(nmemb * bytes);
	if (!ptr)
		return (NULL);
	else
		ft_bzero(ptr, (nmemb * bytes));
	return (ptr);
}
/*int main() 
{
	size_t nmemb = 5;
	size_t bytes = sizeof(int);
	int *arr = (int *)ft_calloc(nmemb, bytes);

	if (arr != NULL)
	{
	printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	free(arr);
	}
}*/
