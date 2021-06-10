/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:03:36 by spatez            #+#    #+#             */
/*   Updated: 2021/06/02 20:20:06 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*dstcast;
	unsigned char	*srccast;
	unsigned char	ccast;

	ccast = (unsigned char)c;
	dstcast = (unsigned char *)dest;
	srccast = (unsigned char *)src;
	while (n > 0)
	{
		*dstcast = *srccast;
		n--;
		dstcast++;
		if (*srccast == ccast)
			return (dstcast);
		srccast++;
	}
	return (NULL);
}
