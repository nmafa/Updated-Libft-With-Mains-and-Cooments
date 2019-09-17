/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 17:18:48 by nmafa             #+#    #+#             */
/*   Updated: 2019/09/17 17:46:52 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void 	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;
	char *dst1;
	char *src1;

	dst1 = (char *)dst;
	src1 = (char *)src;
	i = 0;
	while (i < n)
	{
		dst1[i] = src1[i];
		if ((unsigned char)src1 == (unsigned char)c)
			return ((char *)dst + i);
	}
	return (NULL);                                 
}

int 	main(int ac, char **av)
{
	char *dst = av[1];
	char *src = av[2];

	if (ac == 3)
	{
		dst = ft_memccpy(dst,src, 'r', 7);
		printf("%s\n", dst);
	}
	return (0);
}
