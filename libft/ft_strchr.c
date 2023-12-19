/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeycao <yeycao@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:00:24 by yeycao            #+#    #+#             */
/*   Updated: 2023/12/13 16:17:27 by yeycao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	find;

	i = 0;
	find = (char)c;
	while (str[i] != '\0')
	{
		if (str[i] == find)
			return ((char *)str + i);
		i++;
	}
	if (str[i] == find)
		return ((char *)str + i);
	return (0);
}
/*
int	main()
{
	const char	*str = "a";
	int	c1 = 'a';
	int	c2 = 'c';
	int	c3 = '\0';
	int	c4 = 'i';

	char	*result1 = ft_strchr(str, c1);
	char	*result2 = ft_strchr(str, c2);
	char	*result3 = ft_strchr(str, c3);
	char	*result4 = ft_strchr(str, c4);

	printf("1. %s\n", result1);
	printf("2. %s\n", result2);
	printf("3. %s\n", result3);
	printf("4. %s\n", result4);
	return (0);
}
*/
