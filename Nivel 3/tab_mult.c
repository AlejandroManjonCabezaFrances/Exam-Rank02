/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 12:14:00 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/13 13:32:44 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int ft_small_atoi(char *str)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while(str[i] != '\0')
	{
		result = result * 10 + str[i] - '0'; 
		i++;
	}
	return (result);
}

void ft_small_putnbr(int nbr)
{
	int change;

	change = 0;
	if(nbr >= 10)
	{
		ft_small_putnbr(nbr / 10);
		ft_small_putnbr(nbr % 10);
	}
	if(nbr < 10)
	{
		change = nbr + '0';
		write(1, &change, 1);
	}
}

int main(int argc, char ** argv)
{
	int nbr;
	int i;
	
	i = 1;
	nbr = ft_small_atoi(argv[1]);
	if(argc == 2)
	{
		while(i <= 9)
		{
			ft_small_putnbr(i);
			ft_putstr(" x ");
			ft_small_putnbr(nbr);
			ft_putstr(" = ");
			ft_small_putnbr(i * nbr);
			if(i < 9)
				write(1, "\n", 1);
			i++;
		}		
	}
	write(1, "\n", 1);
	return (0); 
}
