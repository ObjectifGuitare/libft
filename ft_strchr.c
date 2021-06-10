/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:04:16 by spatez            #+#    #+#             */
/*   Updated: 2021/05/27 17:23:25 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	if (!c)
		return ((char *) s + ft_strlen((char *)s));
	while (*s)
		if (*s++ == (char) c)
			return ((char *)--s);
	return (NULL);
}
