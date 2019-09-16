/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 12:02:40 by nmafa             #+#    #+#             */
/*   Updated: 2019/09/09 14:26:51 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char 	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (src[i] != '\0' && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int 	main(int ac ,char **av)
{
	char *str = av[1];
	char *ptr = av[2];

	if (ac == 3)
	{
		ptr = ft_strncpy(ptr, str, 3);
		printf("%s\n", ptr);
	}
	return (0);
}
