/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:01:17 by coder             #+#    #+#             */
/*   Updated: 2022/09/12 23:23:05 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*str;
	size_t			i;

	i = len;
	dest = (unsigned char *)dst;
	str = (unsigned char *)src;
	if (src < dst)
		while (len-- && (dest != 0 || str != 0))
			((unsigned char *)dest)[len] = ((unsigned char *)str)[len];
	else
		ft_memcpy(dest, str, len);
	return (dst);
}
