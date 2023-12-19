/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeycao <yeycao@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:15:12 by yeycao            #+#    #+#             */
/*   Updated: 2023/12/13 19:19:11 by yeycao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const	*str, char (*f)(unsigned int, char))
{
	char			*newstr;
	unsigned int	len;
	unsigned int	i;

	if (!str || !f)
		return (0);
	len = ft_strlen(str);
	newstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!newstr)
		return (0);
	i = 0;
	while (str[i])
	{
		newstr[i] = f(i, str[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

char	f(unsigned int i, char c)
{
	if (i + 1)
	{
		if (ft_isalpha(c))
			c = c - 32;
	}
	return (c);
}

/*
 *int	main()
 *{
 *	char	*str = "hello world";
 *	printf("%s\n", ft_strmapi(str, f));
 *	return (0);
 *}
 */
