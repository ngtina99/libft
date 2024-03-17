/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:22:25 by thuy-ngu          #+#    #+#             */
/*   Updated: 2023/10/12 16:46:46 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l;
	size_t	k;

	l = 0;
	k = 0;
	if (*little == '\0')
		return ((char *)big);
	while (*big && l < len)
	{
		k = 0;
		while (big[l + k] == little[k] && (l + k) < len)
		{
			if (little[k + 1] == '\0')
				return ((char *)big + l);
			k++;
		}
		l++;
	}
	return (NULL);
}
/*int main()
{
	const char *big = "it is something";
	const char *little = "is";
	int	i = ft_strlen(big);
	//char *result = ft_strnstr(big, little, i);
	printf("%s\n", ft_strnstr(big, little, i));
}*/