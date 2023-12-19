/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yeycao <yeycao@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:35:09 by yeycao            #+#    #+#             */
/*   Updated: 2023/12/13 17:36:38 by yeycao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	counter;

	counter = 0;
	while (src[counter] != '\0')
		counter++;
	i = 0;
	if (size == 0)
		return (counter);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (counter);
}
/*
int	main(void)
{
	char	dest1[] = "";
	char	src1[] = "lets see what happen";
	int	r1;

	r1 = ft_strlcpy(dest1, src1, 4);
	printf("%s\n", dest1);
	printf("%d\n", r1);
}
*/
