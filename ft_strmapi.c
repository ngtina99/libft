/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:47:44 by thuy-ngu          #+#    #+#             */
/*   Updated: 2023/10/13 21:42:28 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static char	upper(unsigned int index, char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return(c);
}*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*str;

	index = 0;
	str = (char *)malloc((sizeof(char)) * (ft_strlen(s)) + 1);
	if (!str)
		return (NULL);
	while (s[index])
	{
		str[index] = f(index, s[index]);
		index++;
	}
	str[index] = '\0';
	return (str);
}
/*int	main()
{
	char *str = ft_strmapi("something", &upper);
	printf("%s\n", str);
	free(str);
}*/
