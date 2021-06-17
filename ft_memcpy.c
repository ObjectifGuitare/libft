/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:03:47 by spatez            #+#    #+#             */
/*   Updated: 2021/06/17 18:50:54 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dstcast;
	unsigned char	*srccast;

	if (!dest && !src)
		return (NULL);
	dstcast = ((unsigned char *)dest);
	srccast = ((unsigned char *)src);
	while (n-- > 0)
		*dstcast++ = *srccast++;
	return (dest);
}
