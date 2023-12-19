/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeycao <yeycao@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:44:29 by yeycao            #+#    #+#             */
/*   Updated: 2023/12/12 16:50:52 by yeycao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*strnew;
	size_t				i;

	i = 0;
	strnew = str;
	while (i < n)
	{
		if (strnew[i] == (unsigned char)c)
			return ((char *)strnew + i);
		i++;
	}
	return (0);
}

/*
int	main()
{
	const void *str = "ABCDEF";
	int c = 'F';
	size_t n = 6;
	char *sn;

	sn = ft_memchr(str, c, n);
	printf("Result: %s\n", sn);
	return (0);
}
*/
