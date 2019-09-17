/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:43:58 by nmafa             #+#    #+#             */
/*   Updated: 2019/09/17 17:18:33 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void 	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	char *dst1;
	char *src1;

	i = 0;
	dst1 = (char *)dst;/* we typecast to hold mem for dst*/
	src1  = (char *)src;//we type cast to hold mem for src
	while (i < n) //We want to loop as  long our counter is smaller than n
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}

int 	main(int ac, char **av)
{
	char *dst = av[1];
	char *src = av[2];

	if (ac == 3)
	{
		dst = ft_memcpy((void *) dst, (void *) src, 2);
		printf("%s\n", dst);
	}
	return (0);
}
