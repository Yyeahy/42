/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeycao <yeycao@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:27:51 by yeycao            #+#    #+#             */
/*   Updated: 2023/12/12 16:36:31 by yeycao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
/*
int	main()
{
	int c1 = 'A';
	int c2 = 'b';
	int c3 = '&';
	int c4 = '\0';

	ft_isalpha(c1);
	printf("%d\n", c1);
	printf("%c\n", c1);
	ft_isalpha(c2);
	printf("%d\n", c2);
	printf("%c\n", c2);
	ft_isalpha(c3);
	printf("%d\n", c3);
	printf("%c\n", c3);
	ft_isalpha(c4);
	printf("%d\n", c4);
	printf("%c\n", c4);
}
*/