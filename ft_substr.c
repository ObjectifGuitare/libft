/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seb <seb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:04:59 by spatez            #+#    #+#             */
/*   Updated: 2021/06/02 15:13:20 by seb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_mallocount(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		swap;

	swap = (int) len;
	i = 0;
	if (start > ft_strlen(s))
		return (1);
	while (s[start++])
	{
		if (len-- == 0)
			return (swap + 1);
		i++;
	}
	return (i + 1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	substr = malloc(ft_mallocount(s, start, len));
	if (!substr)
		return (NULL);
	if (start > ft_strlen(s))
	{
		*substr = '\0';
		return (substr);
	}
	while (s[start] && len-- > 0)
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
