/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 09:17:15 by nmafa             #+#    #+#             */
/*   Updated: 2019/08/27 09:42:30 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*int 	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else 
		return (0);
}

int 	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else 
		return (0);
}

int 	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else 
		return (0);
}

int 	ft_isalnum(int c)
{
	//return 1 if c is alspha or is digit
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1i)
		return (1);
	else 
		return (0);
}

int 	ft_toupper(int c)
{
	//check if c is a lower case first
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

int 	ft_tolower(int c)
{
	//check if c is uppercase
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	 //c will not be converted if it is not an uppercase
	return (c);
}*/

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

char 	*ft_strdup(const char *s1)
{
	char *str;
	int i;

	i = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int 	main(void)
{
	char *str;	

	str = ft_strdup("Nakedi");
	printf("%s\n", str);
	return (0);
}
