/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeycao <yeycao@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:41:51 by yeycao            #+#    #+#             */
/*   Updated: 2023/12/13 17:52:10 by yeycao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main()
{
	const char	s1[] = "12345";
	const char	s2[] = "12344";

	int	compare1 = ft_strncmp(s1, s2, 0);
	int	compare2 = ft_strncmp(s1, s2, 4);
	int	compare3 = ft_strncmp(s1, s2, 5);
	int	compare4 = ft_strncmp(s1, s2, 6);

	printf("Result1: %d\n", compare1);
	printf("Result2: %d\n", compare2);
	printf("Result3: %d\n", compare3);
	printf("Result4: %d\n", compare4);
	return (0);
}
*/
