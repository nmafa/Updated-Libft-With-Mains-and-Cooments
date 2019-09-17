/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmafa <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:33:29 by nmafa             #+#    #+#             */
/*   Updated: 2019/09/17 15:42:28 by nmafa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void 	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*Bzero basically fills a string with 0(zeros) and I used memset because memset fill a byte string with a byte value*/

