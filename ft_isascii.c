/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmoroz <vmoroz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 11:47:39 by vmoroz            #+#    #+#             */
/*   Updated: 2023/09/02 13:51:55 by vmoroz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
// int	main(void)
// {
// 	char input1[] = "Hello123";
// 	char input2[] = "√";
// 	char input3[] = "123456";
// 	char input4[] = "!@#";

// 	if (ft_isascii(input1))
// 	{
// 		printf("\"%s\" contains only ascii characters.\n", input1);
// 	}
// 	else
// 	{
// 		printf("\"%s\" contains non-ascii characters.\n", input1);
// 	}

// 	if (ft_isascii(input2))
// 	{
// 		printf("\"%s\" contains only ascii characters.\n", input2);
// 	}
// 	else
// 	{
// 		printf("\"%s\" contains non-ascii characters.\n", input2);
// 	}

// 	if (ft_isascii(input3))
// 	{
// 		printf("\"%s\" contains only ascii characters.\n", input3);
// 	}
// 	else
// 	{
// 		printf("\"%s\" contains non-ascii characters.\n", input3);
// 	}

// 	if (ft_isascii(input4))
// 	{
// 		printf("\"%s\" contains only ascii characters.\n", input4);
// 	}
// 	else
// 	{
// 		printf("\"%s\" contains non-ascii characters.\n", input4);
// 	}

// 	return (0);
// }