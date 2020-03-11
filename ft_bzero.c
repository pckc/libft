/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 15:17:40 by pde-carv          #+#    #+#             */
/*   Updated: 2020/03/11 13:08:54 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Writes zeroes in the place of bytes
**
**	Variables
**	---------
**	void *s: string to be filled
**	size_t n: number of bytes to fill
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
