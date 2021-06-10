/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:04:24 by spatez            #+#    #+#             */
/*   Updated: 2021/05/27 17:19:49 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	s3 = ft_calloc(1, (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!s3)
		return (NULL);
	while (s1[++i] != '\0')
	{
		s3[j] = s1[i];
		j++;
	}
	i = -1;
	while (s2[++i] != '\0')
	{
		s3[j] = s2[i];
		j++;
	}
	return (s3);
}
