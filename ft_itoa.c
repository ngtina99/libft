/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:22:25 by thuy-ngu          #+#    #+#             */
/*   Updated: 2023/10/21 03:15:03 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_decimalplaces(int n)
{
	size_t	decimalplc;

	decimalplc = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
		decimalplc = decimalplc + 1;
	while (n != 0)
	{
		n = n / 10;
		decimalplc++;
	}
	return (decimalplc);
}

char	*ft_itoa(int nb)
{
	char		*str;
	size_t		len;
	long int	n;

	n = nb;
	len = ft_decimalplaces(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		len--;
		str[len] = n % 10 + 48;
		n = n / 10;
	}
	return (str);
}
/*int main(void)
{
	int i = 1234;
	printf("%s\n", ft_itoa(i));
}*/