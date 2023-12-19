/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeycao <yeycao@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 16:27:21 by yeycao            #+#    #+#             */
/*   Updated: 2023/12/05 16:59:34 by yeycao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1 || !set)
		return (0);
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end && s1[end - 1] && ft_strchr(set, s1[end - 1]))
		end--;
	if (start > end)
		return (ft_strdup(""));
	result = ft_substr(s1, start, end - start);
	return (result);
}

/*
 * int	main()
 * {
 *	printf("%s\n", ft_strtrim("ABCD", "A"));
 *	printf("%s\n", ft_strtrim("ABCD", "B"));
 *	printf("%s\n", ft_strtrim("ABCD", "BC"));
 *	printf("%s\n", ft_strtrim("ABCD", "ABCD"));
 *	return (0);
 * }
* */
