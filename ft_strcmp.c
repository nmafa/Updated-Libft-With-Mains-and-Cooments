/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 09:42:58 by nmafa             #+#    #+#             */
/*   Updated: 2019/09/06 16:50:57 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int 	ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i])
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
		i = ft_strcmp(s1, s2);
		printf("%d\n", i);
	}
	return (0);
}
