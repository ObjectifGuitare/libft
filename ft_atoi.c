/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:01:02 by spatez            #+#    #+#             */
/*   Updated: 2021/05/27 16:55:25 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_space(char c)
{
	return (c == '\f' || c == '\n' || c == ' '
		|| c == '\r' || c == '\t' || c == '\v');
}

int	ft_atoi(const char *nptr)
{
	long long	n;
	long long	multi;

	multi = 1;
	n = 0;
	if (!nptr)
		return (0);
	while (ft_is_space(*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
		if (*nptr++ == '-')
			multi *= -1;
	while (*nptr >= '0' && *nptr <= '9')
	{
		n = (n * 10) + (*nptr++ - '0');
		if (n < 0)
		{
			if (multi == 1)
				return (-1);
			return (0);
		}
	}
	return (n * multi);
}
