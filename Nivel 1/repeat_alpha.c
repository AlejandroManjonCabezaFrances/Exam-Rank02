/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 07:53:31 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/11 13:20:00 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char c, int i)
{	
	while(i >= 0)
	{
		write(1, &c, 1);
		i--;
	}
}

void repeat_alpha(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			ft_putstr(str[i], str[i] - 'a');
		else if(str[i] >= 'A' && str[i] <= 'Z')
			ft_putstr(str[i], str[i] - 'A');
		else
			write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}
