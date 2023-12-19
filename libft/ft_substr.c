/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeycao <yeycao@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:51:52 by yeycao            #+#    #+#             */
/*   Updated: 2023/12/14 17:11:42 by yeycao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*newstr;

	if (!str)
		return (NULL);
	if (start > ft_strlen(str))
		newstr = (char *)malloc(1);
	else
	{
		if (len > ft_strlen(str) - start)
			len = ft_strlen(str) - start;
		newstr = (char *)malloc(sizeof(char) * (len + 1));
	}
	if (!newstr)
		return (NULL);
	if (start > ft_strlen(str))
	{
		newstr[0] = '\0';
		return (newstr);
	}
	ft_strlcpy(newstr, str + start, len + 1);
	return (newstr);
}
/*
int	main()
{
	char	*answer;

	answer = ft_substr("ABCDEFG", 3, 2);
	printf("%s\n", answer);
}
*/
