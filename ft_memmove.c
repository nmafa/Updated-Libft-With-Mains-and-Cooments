/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 17:47:33 by nmafa             #+#    #+#             */
/*   Updated: 2019/09/21 13:48:34 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void 	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *s1;
	char *s2;
	size_t i;

	s1 = (char *)dst;
	s2 = (char *)src;

	i = 0;
	while (i < len)
	{
		s1[i] = s2[i];
		i++;
	}
	return (dst);

}

int 	main()
{
	char *dst = "newstring";
	char *src = "oldstring";
	
	dst = ft_memmove(dst, src, 10);
	printf("%s\n", dst);
	return (0);
}	
