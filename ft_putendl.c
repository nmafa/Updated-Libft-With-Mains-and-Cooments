/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 17:10:19 by nmafa             #+#    #+#             */
/*   Updated: 2019/09/23 17:26:11 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void 	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n')
}
 //I'm using putstr to output the string on the standard output
 //putchar is used to output the newline character
