/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:22:25 by thuy-ngu          #+#    #+#             */
/*   Updated: 2023/10/14 15:29:02 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoined;

	strjoined = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!strjoined)
		return (NULL);
	ft_strlcpy(strjoined, s1, (ft_strlen(s1) + 1));
	ft_strlcat(strjoined, s2, ((ft_strlen(s2) + ft_strlen(s1)) + 1));
	return (strjoined);
}
/*int	main()
{
	char const *s1 = "this is ";
	char const *s2 = "something";
	printf("%s\n", ft_strjoin(s1, s2));
}*/
