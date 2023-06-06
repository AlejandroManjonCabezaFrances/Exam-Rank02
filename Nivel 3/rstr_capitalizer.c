/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 11:06:40 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/13 12:42:41 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rstr_capitalizer(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if((str[i] >= 'a' && str[i] <= 'z') && (str[i+1] == ' '|| str[i+1] == '\t' || str[i+1] == '\0'))
			str[i] = str[i] - 32;
		write(1, &str[i], 1);
		i++;

	}
}

int main(int argc, char **argv)
{	
	if(argc < 2)
		write(1, "\n", 1);
	else
	{
		int i;

		i = 1;
		while(i < argc)
		{
			rstr_capitalizer(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
