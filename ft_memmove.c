/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:03:50 by spatez            #+#    #+#             */
/*   Updated: 2021/06/11 00:40:45 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *b, const void *a, size_t n)
{
	char			*acast;
	char			*bcast;
	int				i;

	if (a == 0 && b == 0)
		return (NULL);
	i = -1;
	acast = (char *)a;
	bcast = (char *)b;
	if (bcast > (char *)acast)
	{
		while (n > 0)
		{
			--n;
			bcast[n] = acast[n];
		}
	}
	else if (bcast <= (char *)acast)
	{
		while ((size_t)++i < n)
			bcast[i] = acast[i];
	}
	return (bcast);
}
