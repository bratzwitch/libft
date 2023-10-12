/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoroz <vmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:25:54 by vmoroz            #+#    #+#             */
/*   Updated: 2023/09/02 13:51:41 by vmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)dest;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

// int	main(void)
// {
// 	int i;
// 	i = 0;
// 	char str[] = "hello";
// 	ft_bzero(str, 3);
// 	while (i < 5)
// 	{
// 		printf("%c", str[i]);
// 		i++;
// 	}
// 	return (0);
// }