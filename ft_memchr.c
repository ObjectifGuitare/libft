/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:03:40 by spatez            #+#    #+#             */
/*   Updated: 2021/05/27 17:29:06 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, int n)
{
	unsigned char	*scast;

	scast = (unsigned char *)s;
	while (n > 0)
	{
		if (*scast == (unsigned char) c)
			return (scast);
		n--;
		scast++;
	}
	return (NULL);
}
