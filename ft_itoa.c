/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenhab <mobenhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:36:49 by mobenhab          #+#    #+#             */
/*   Updated: 2025/11/16 17:07:28 by mobenhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

static int	len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i = 1;
		n = -n;
	}
	while (n >= 10)
	{
		i++;
		n = n / 10;
	}
	i++;
	return (i);
}

char	*ft_itoa(int n)
{
	int		n_len;
	char	*res;
	long	nb;

	nb = n;
	if (n < 0)
		nb = -nb;
	if (n == -2147483648)
		n_len = 11;
	else
		n_len = len(n);
	res = malloc(sizeof(char) * (n_len + 1));
	if (!res)
		return (NULL);
	res[n_len] = '\0';
	n_len--;
	while (n_len >= 0)
	{
		res[n_len] = (nb % 10) + '0';
		n_len--;
		nb = nb / 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
