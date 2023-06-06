/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 11:36:03 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/10 12:01:11 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void str_capitalizer(char *str)
{
	int i;

	i = 1;
	if(str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	write(1, &str[0], 1);
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' ' || str[i - 1] == '\t'))
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
			str_capitalizer(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
