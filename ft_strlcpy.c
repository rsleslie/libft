/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 22:45:30 by coder             #+#    #+#             */
/*   Updated: 2022/09/08 23:28:14 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize <= 0)
		return (ft_strlen(src));
	while ((i + 1) < dstsize && src[i] != '\0')
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
