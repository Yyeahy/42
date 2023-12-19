/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeycao <yeycao@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:10:49 by yeycao            #+#    #+#             */
/*   Updated: 2023/12/12 15:23:02 by yeycao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*newstr;

	newstr = str;
	i = 0;
	while (i < n)
	{
		newstr[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char	check[27] = "abcdefghijklmnopqrstuvwxyz";
	char	ft_check[27] = "abcdefghijklmnopqrstuvwxyz";
	int	i;
	int	j;

	i = 0;
	j = 0;
	bzero(check, 20);
	ft_bzero(ft_check, 20);
	while (i < 27)
	{
		printf("%d", check[i]);
		i++;
	}
	printf("\n");
	while (j < 27)
	{
		printf("%d", ft_check[j]);
		j++;
	}
	printf("\n");
	return (0);
}
*/
