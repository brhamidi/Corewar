/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/10 13:39:44 by msrun             #+#    #+#             */
/*   Updated: 2017/03/10 13:47:16 by msrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_dir_uint(unsigned char *str)
{
	unsigned int	nb;

	nb = str[0] * 256 * 256 * 256;
	nb += str[1] * 256 * 256;
	nb += str[2] * 256;
	nb += str[3];
	return (nb);
}