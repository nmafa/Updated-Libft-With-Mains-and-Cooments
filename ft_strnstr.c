/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:52:20 by nmafa             #+#    #+#             */
/*   Updated: 2019/09/09 17:29:02 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char 	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return ((char *)haystack);
	while (i < len && haystack != '\0')
	{
		if (haystack[i] == needle[j])
		{
			while (needle[j] == haystack[i + j] && needle[j] != '\0')
			{
				j++;
			}
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}

int 	main(int ac, char **av)
{
	char *s1 = av[1];
	char *s2 = av[2];

	if (ac == 3)
	{
		s1 = ft_strnstr(s1, s2, 3);
		printf("%s\n", s2);
	}
	return (0);
}	
