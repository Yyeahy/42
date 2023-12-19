/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeycao <yeycao@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:52:13 by yeycao            #+#    #+#             */
/*   Updated: 2023/12/12 16:57:33 by yeycao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*news1;
	const unsigned char	*news2;
	size_t				i;

	i = 0;
	news1 = s1;
	news2 = s2;
	while (i < n)
	{
		if (*(news1 + i) != *(news2 + i))
			return (*(news1 + i) - *(news2 + i));
		i++;
	}
	return (0);
}

/*
int	main()
{
	const void *s1 = "ABCD";
	const void *s2 = "ABCE";
	int sn;
	size_t n = 4;

	sn = ft_memcmp(s1, s2, n);
	printf("Result: %d\n", sn);
	return (0);
}
*/
