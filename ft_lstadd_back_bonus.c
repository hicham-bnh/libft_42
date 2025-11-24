/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenhab <mobenhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:54:08 by mobenhab          #+#    #+#             */
/*   Updated: 2025/11/13 15:28:29 by mobenhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*fin;

	fin = ft_lstlast(*lst);
	if (!new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
		fin->next = new;
}
