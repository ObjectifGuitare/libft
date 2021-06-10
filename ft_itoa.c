/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spatez <spatez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 15:03:32 by spatez            #+#    #+#             */
/*   Updated: 2021/05/27 17:30:46 by spatez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n % 10);
	return (n % 10);
}

static int 	ft_is_intmin(int n)
{
	return (n == -2147483648);
}

static int	ft_intlen(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n *= (-1);
	}
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ascii;
	int		len;
	int		i;

	i = 0;
	len = ft_intlen(n);
	if (ft_is_intmin(n))
		return (ft_strdup("-2147483648"));
	ascii = malloc(len + 2);
	if (!ascii)
		return (NULL);
	if (n < 0)
		ascii[0] = '-';
	if (n == 0)
		ascii[0] = 0 + '0';
	while (n != 0)
	{
		ascii[len - i] = ft_abs(n) + '0';
		n /= 10;
		i++;
	}
	ascii[len + 1] = '\0';
	return (ascii);
}
