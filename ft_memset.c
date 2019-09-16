/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 09:41:52 by nmafa             #+#    #+#             */
/*   Updated: 2019/09/16 15:22:00 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void 	*ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *n;/* n is created to hold place for casted version of void b */

	i = 0;
	n = (unsigned char *)b;/*n is set to the type cast of b*/ 
	if (len <= 0)
		return (b);
	while (i < len)
	{
		n[i] = c;
		i++;
	}
	//printf("n: %s , b: %s\n", (char *)n, (char *)b);
	return (b);
}

int 	main()
{
	printf("get's here/n");
	char *str;
	char st[17] = "This is a string";
	//unsigned char *n;
	
	str = st;
	//n = (unsigned char *)str;
	str = ft_memset((void *)str, '*', 2);

	//str[0] = 'h';

	printf("%s\n", str);
	return (0);
}

