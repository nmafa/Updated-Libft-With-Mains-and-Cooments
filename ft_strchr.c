/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 18:08:43 by nmafa             #+#    #+#             */
/*   Updated: 2019/09/10 15:48:12 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char 	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			/*return the character we found in out if statement and iterate without loosing its current postion*/
			return ((char *)s + i);
		i++;
	}
	return (0);
}

int 	main(void)
{
	const char *str = "Nakedi";
	char c = 'k';
	char  *ret;

	ret = ft_strchr(str,c);
	printf("%s\n", ret);
	return (0);
}
