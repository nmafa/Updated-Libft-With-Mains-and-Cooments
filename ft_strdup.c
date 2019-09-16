/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 08:34:09 by nmafa             #+#    #+#             */
/*   Updated: 2019/08/27 09:42:19 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char 	*ft_strdup(const char *s1)
{
	int i;
	char *str;

	i = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen + 1);
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
