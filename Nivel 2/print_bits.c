/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:52:41 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/05 16:02:45 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;
	unsigned char bit;

	i = 8;
	while(i--)
	{
		bit = ((octet >> i) & 1) + '0';
		write(1, &bit, 1);	
	}
}

void	print_bits(unsigned char octet)
{
	int				idx;
	unsigned char	mask;
	unsigned char	bit;

	idx = 7;
	mask = 1;
	while (idx >= 0)
	{
		bit = (((octet >> idx) & mask) + '0');
		write(1, &bit, 1);	
		idx--;
	}
}