/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 09:57:28 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/10 11:06:16 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int small_atoi(char *str)
{
	int result;
	int i;

	i = 0;
	result = 0;
	while(str[i] != '\0')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result);
}

void print_hex(int nbr)
{
	int change;

	change = 0;
	if(nbr >= 16)
	{
		print_hex(nbr / 16);
		print_hex(nbr % 16);
	}
	if(nbr <= 9)
	{
		change = nbr + '0';
		write(1, &change, 1);
	}
	else if(nbr < 16)
	{
		change = nbr + 'W';
		write(1, &change, 1);
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
		print_hex(small_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
