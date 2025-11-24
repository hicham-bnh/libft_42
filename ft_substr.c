/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenhab <mobenhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:14:04 by mobenhab          #+#    #+#             */
/*   Updated: 2025/11/11 15:15:50 by mobenhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	size_t	i;
	char	*tmp;

	len_s = ft_strlen(s);
	if (len_s < start)
		len = 0;
	if (len > len_s - start)
		len = len_s - start;
	tmp = malloc((len + 1) * sizeof(char));
	if (!tmp)
		return (0);
	i = 0;
	while (i < len)
	{
		tmp[i] = s[start];
		i++;
		start++;
	}
	tmp[i] = '\0';
	return (tmp);
}
