/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:21:45 by nmafa             #+#    #+#             */
/*   Updated: 2019/09/21 14:40:36 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void 	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	char *str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}

int 	main(void)
{
	const char *str = "Nakedimary";
	char c = 'k';
	char  *ret;

	ret = ft_memchr(str,c, 6);
	printf("%s\n", ret);
	return (0);
}
