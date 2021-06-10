/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:04:49 by spatez            #+#    #+#             */
/*   Updated: 2021/06/10 00:40:49 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				j;
	unsigned int	y;
	int				m;

	y = 0;
	j = -1;
	i = 0;
	m = 1;
	if (!s1 || !*s2)
		return ((char *) s1);
	if (n == 0)
		return (NULL);
	while (s1[i] && m)
	{
		m = (unsigned int) n - y;
		while (m-- && s1[i++] == s2[++j])
			if (s2[j + 1] == '\0' )
				return ((char *) s1 + i - ft_strlen(s2));
		y++;
		i = y;
		j = -1;
	}
	return (NULL);
}
