/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:03:44 by spatez            #+#    #+#             */
/*   Updated: 2021/05/27 17:28:47 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*scast1;
	unsigned char	*scast2;

	scast1 = (unsigned char *)s1;
	scast2 = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*scast1 != *scast2)
			return (*scast1 - *scast2);
		scast1++;
		scast2++;
	}
	return (0);
}
