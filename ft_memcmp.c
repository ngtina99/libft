/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:22:25 by thuy-ngu          #+#    #+#             */
/*   Updated: 2023/10/20 16:52:22 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*cs1;
	unsigned char		*cs2;
	size_t				i;
	int					diff;

	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (cs1[i] != cs2[i])
		{
			diff = cs1[i] - cs2[i];
			return (diff);
		}
		i++;
	}
	return (0);
}
/*int	main()
{
	unsigned char cs1[] = "abc";
	unsigned char cs2[] = "abb";
	size_t n = sizeof(cs1);
	int result = ft_memcmp(cs1, cs2, n);

    printf("diff: %d\n", result);
    if (result == 0)
    {
        printf("equal\n");
    } 
    else if (result < 0) 
    {
        printf("1 < 2\n");
    } 
    else 
    {
        printf("1 > 2\n");
    }
}*/
