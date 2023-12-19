/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeycao <yeycao@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:00:17 by yeycao            #+#    #+#             */
/*   Updated: 2023/12/13 18:08:42 by yeycao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last;
	char	find;
	size_t	i;

	last = (char *)str;
	find = (char)c;
	i = ft_strlen(str);
	while (i > 0)
	{
		if (last[i] == find)
			return (last + i);
		i--;
	}
	if (last[i] == find)
		return (last);
	return (0);
}
/*
int	main()
{
	const char	*str = "abcdefgabcdefg";
	int	c1 = 'a';
	int	c2 = 'b';
	int	c3 = '\0';
	int	c4 = 'i';
	char	*result1 = ft_strrchr(str, c1);
	char	*result2 = ft_strrchr(0, c2);
	char	*result3 = ft_strrchr(str, c3);
	char	*result4 = ft_strrchr(str, c4);

	printf("1. %s\n", result1);
	printf("2. %s\n", result2);
	printf("3. %s\n", result3);
	printf("4. %s\n", result4);
	return (0);
}
*/
