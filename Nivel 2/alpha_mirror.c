/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 12:23:19 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/03 12:51:57 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void alpha_mirror(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] = 'z' - str[i] + 'a';
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = 'Z' - str[i] + 'A';
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
		alpha_mirror(argv[1]);
	write(1, "\n", 1);
	return (0);
}
