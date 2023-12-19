/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeycao <yeycao@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:33:00 by yeycao            #+#    #+#             */
/*   Updated: 2023/12/13 19:14:47 by yeycao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_word(const char *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	if (!s[0])
		return (0);
	while (s[i] && s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			words++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		words++;
	return (words);
}

static void	free_all(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static char	**ft_my_malloc(const char *s, char c)
{
	char	**ret;

	ret = malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	return (ret);
}

char	**ft_split(const char *s, char c)
{
	char	**ret;
	size_t	len;
	size_t	i;

	i = 0;
	ret = ft_my_malloc(s, c);
	if (!s || !ret)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			ret[i] = ft_substr(s - len, 0, len);
			if (!ret[i])
				free_all(ret);
			i++;
		}
		else
			s++;
	}
	ret[i] = 0;
	return (ret);
}
/*
 * int	main()
 * {
 *	char	**tab;
 *	unsigned int	i;
 *
 *	i = 0;
 *	tab = ft_split(" abc de fg", '');
 *	while (tab[i])
 *	{
 *		printf("%s\n", tab[i]);
 *		i++;
 *	}
 *	return (0);
 * }
 * 
 * */
