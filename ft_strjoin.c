/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 23:48:07 by coder             #+#    #+#             */
/*   Updated: 2022/09/12 23:23:24 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, char const *s2)
{
	size_t	buffer;
	char	*str;
	size_t	i;
	int		x;

	i = 0;
	x = 0;
	buffer = ft_strlen(s2) + ft_strlen(s1);
	str = (char *)malloc(sizeof(char) * buffer + 1);
	if (str == NULL || !s1 || !s2)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[x] != '\0')
	{
		str[i] = s2[x];
		i++;
		x++;
	}
	str[i] = '\0';
	return ((char *)str);
}
