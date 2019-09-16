/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 14:28:48 by nmafa             #+#    #+#             */
/*   Updated: 2019/09/10 15:46:13 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char 	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return ((char *)haystack);
	/*we start by checking if haystack id not null*/ 
	while (haystack[i] != '\0')
	{
		/*we check if the character in needle[j] is the same haystack[j]*/
		if (haystack[i] == needle[j])
		{
			/*[i +j] means that we are iterating throught i and j without changing the value of i*/
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

	if(ac == 3)
	{
		s1 = ft_strstr(s1, s2);
		printf("%s\n", s2);
	}
	return (0);
}

