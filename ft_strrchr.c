/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:04:52 by spatez            #+#    #+#             */
/*   Updated: 2021/06/10 00:16:52 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if ((unsigned char) c == 0)
		return ((char *) s + i);
	while (*s)
		s++;
	s--;
	while (i-- > 0)
	{
		if ((unsigned char) *s == (unsigned char) c)
			return ((char *) s);
		s--;
	}
	return (NULL);
}
