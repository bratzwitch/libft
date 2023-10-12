/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoroz <vmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:22:18 by vmoroz            #+#    #+#             */
/*   Updated: 2023/09/06 10:38:34 by vmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del(void *content)
// {
// 	free(content);
// }

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !*lst || !del)
		return ;
	while (lst && *lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
