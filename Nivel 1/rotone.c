/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:55:24 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/03 10:50:07 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rotone(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if(str[i] == 'z' || str[i] == 'Z')
				str[i] = str[i] - 26;
			str[i] = str[i] + 1;
		}
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
		rotone(argv[1]);
	write(1, "\n", 1);
	return (0);
}
