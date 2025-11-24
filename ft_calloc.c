/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenhab <mobenhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:25:33 by mobenhab          #+#    #+#             */
/*   Updated: 2025/11/17 11:34:16 by mobenhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;

	if (!size || !nmemb)
	{
		res = malloc(0);
		if (!res)
			return (NULL);
		return (res);
	}
	if (size && nmemb > SIZE_MAX / size)
		return (NULL);
	res = malloc(nmemb * size);
	if (!res)
		return (NULL);
	ft_memset(res, 0, nmemb * size);
	return (res);
}
