/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 18:22:13 by nmafa             #+#    #+#             */
/*   Updated: 2019/09/21 15:11:37 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int 	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *str1;
	char *str2;
	size_t i;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}

int 	main()
{
	int i;
	char *s1 = "Nakedi";
	char *s2 = "Nakedi";

	i = ft_memcmp(s1, s2, 3);
	if(i > 0)
	{
      printf("str2 is less than str1");
   	} 
	else if(i < 0) 
	{
      printf("str1 is less than str2");
	} 
	else 
	{
      printf("str1 is equal to str2");
	}	
	return (0);
}	
