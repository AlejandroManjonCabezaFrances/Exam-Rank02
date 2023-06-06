/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 10:50:31 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/12 13:55:51 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void search_and_replace(char *str,  char a, char b)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
			if(str[i] == a)
				str[i] = b;
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 4 && argv[2][1] == '\0' && argv[3][1] == '\0')
		search_and_replace(argv[1], *argv[2], *argv[3]);
	write(1, "\n", 1);
	return (0);
}
