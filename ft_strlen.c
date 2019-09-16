/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 08:18:51 by nmafa             #+#    #+#             */
/*   Updated: 2019/08/27 08:50:49 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

size_t 	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int 	main(void)
{
	size_t i;
	const char *s = "Nakedi";

	i = ft_strlen(s);
	printf("%zu", i);
	return (0);
}*/
