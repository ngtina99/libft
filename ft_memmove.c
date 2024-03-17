/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:43:03 by thuy-ngu          #+#    #+#             */
/*   Updated: 2023/10/20 18:15:10 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*src2;
	unsigned char	*dest2;

	src2 = (unsigned char *)src;
	dest2 = (unsigned char *)dest;
	if ((!dest2 && !src2) || n == 0)
		return (dest2);
	else if (dest2 > src2)
	{
		while (n--)
		{
			dest2[n] = src2[n];
		}
	}
	else
		while (n--)
			*dest2++ = *src2++;
	return (dest);
}
/*int main()
{
	char src[] = "something";
	printf("%s\n", src);
	ft_memmove(src + 2, src, sizeof(src));
	printf("%s\n", src);
}*/