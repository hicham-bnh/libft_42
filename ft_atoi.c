/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenhab <mobenhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:50:28 by mobenhab          #+#    #+#             */
/*   Updated: 2025/11/13 17:06:45 by mobenhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	skip_space(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\n')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;
	int	count_sign;

	count_sign = 0;
	i = skip_space(str);
	sign = 1;
	result = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		count_sign++;
		if (str[i] == '-')
			sign *= (-1);
		if (count_sign == 2)
			return (0);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
