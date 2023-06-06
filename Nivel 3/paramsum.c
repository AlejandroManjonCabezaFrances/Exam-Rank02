/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 07:46:36 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/13 11:22:14 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_small_putnbr(int nbr)
{
	if(nbr >= 10)
	{
		ft_small_putnbr(nbr / 10);
		ft_small_putnbr(nbr % 10);
	}
	if(nbr <= 9)
	{
		nbr = nbr + '0';
		write(1, &nbr, 1);
	}
}

int main(int argc, char **argv)
{
	(void) argv;
	ft_small_putnbr(argc - 1);
	write(1, "\n", 1);	
	return (0);
}
