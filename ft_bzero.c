/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:22:25 by thuy-ngu          #+#    #+#             */
/*   Updated: 2023/10/20 18:35:27 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*int main()
{
	char s[] = "something";
	size_t n = 4;
	printf("%s\n", s);
	ft_bzero(s, n);
	//NOT WORKING: printf("%s\n", s); a null-terminated string
	size_t i = 0;
	while (i < sizeof(s))
	{
		printf("%c\n", s[i]);
		i++;
	}
}*/