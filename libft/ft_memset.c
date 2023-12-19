/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeycao <yeycao@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:52:45 by yeycao            #+#    #+#             */
/*   Updated: 2023/12/13 14:58:58 by yeycao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*newstr;
	size_t			i;

	i = 0;
	newstr = str;
	while (i < n)
	{
		newstr[i] = c;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "Let's see what happen";
	int	c = 'a';

	printf("%s\n", str);
	ft_memset(str, c, 5);
	printf("%s\n", str);
	memset(str, c, 5);
	printf("%s\n", str);
	return (0);
}
*/
