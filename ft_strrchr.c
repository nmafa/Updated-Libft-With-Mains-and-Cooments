/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 08:31:19 by nmafa             #+#    #+#             */
/*   Updated: 2019/09/10 17:20:52 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char 	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}

int 	main(void)
{
	const char *str = strdup("Nakedi");
	char c = 'k';
	char *ret;
	
	ret = ft_strrchr(str,c);
	ret[0] = '\0';
	printf("%s\n", ret);
	return (0);
}

