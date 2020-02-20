/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-carv <pde-carv@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 20:42:46 by pde-carv          #+#    #+#             */
/*   Updated: 2020/02/17 18:07:40 by pde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(long long c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
