/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoroz <vmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:46:37 by vmoroz            #+#    #+#             */
/*   Updated: 2023/09/02 13:39:49 by vmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst != NULL)
	{
		while (lst != NULL)
		{
			(*f)(lst->content);
			lst = lst->next;
		}
	}
	return ;
}
