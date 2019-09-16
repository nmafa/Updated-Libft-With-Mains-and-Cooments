/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 16:39:07 by nmafa             #+#    #+#             */
/*   Updated: 2019/09/09 12:02:23 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	/* declare our counter i as a size_t , this is done because the paramter we are taking in for n is a size_t*/
	size_t i;

	i = 0;
	/*We want our while loop to happen as long we haven't reached the end and while our character in s1[i] is the same as the character in s2[i] and while our character variable is less than n*/	
	while (s1[i]!= '\0' && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int 	main(int ac, char **av)
{
	int i;
	char *s1 = av[1];
	char *s2 = av[2];

	if (ac == 3)
	{
		i = ft_strncmp(s1, s2, 3);
		printf("%d\n", i);
	}
	return (0);
}

