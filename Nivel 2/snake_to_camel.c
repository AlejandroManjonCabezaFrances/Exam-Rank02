/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:17:23 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/05 16:29:36 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void snake_to_camel(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == '_')
		{
			i++;
			str[i] = str[i] - 32;
		}
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
		snake_to_camel(argv[1]);
	write(1, "\n", 1);
	return (0);
}
