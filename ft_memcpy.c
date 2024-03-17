/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:58:27 by thuy-ngu          #+#    #+#             */
/*   Updated: 2023/10/21 03:10:50 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	if (!dest && !src)
		return (NULL);
	ptr1 = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	while (n--)
	{
		*ptr1++ = *ptr2++;
	}
	return (dest);
}
/*int main()
{
	char src[] = "anything";
	char dest[9];
	printf("%s\n", dest);
	ft_memcpy(dest, src, 9);
	printf("%s\n", dest);
}*/