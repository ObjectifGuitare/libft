/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:16:36 by seb               #+#    #+#             */
/*   Updated: 2021/06/11 00:41:42 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free(int i, char **dest)
{
	while (i)
		free(dest[--i]);
	free(dest);
	return (NULL);
}

static int	ft_wordlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s && s[i] && s[i] != c)
		i++;
	return (i);
}

static int	ft_word_number(char const *s, char c)
{
	int	i;
	int	w;

	w = 0;
	i = 0;
	while (s && s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			w++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (w);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		wnb;
	int		i;

	if (!s)
		return (NULL);
	wnb = ft_word_number(s, c);
	dest = malloc(sizeof(char *) * (wnb + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < wnb)
	{
		while (s && *s && *s == c)
			s++;
		dest[i] = ft_substr(s, 0, ft_wordlen(s, c));
		if (!(dest[i]))
			return (ft_free(i, dest));
		s += ft_wordlen(s, c);
		i++;
	}
	dest[i] = 0;
	return (dest);
}
