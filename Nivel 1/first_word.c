/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:00:32 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/03 07:21:08 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void first_word(char *str)
{
	int i;

	i = 0;
	while(str[i] == ' ' || str[i] == '\t')
		i++;
	while(str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char ** argv)
{
	int i;

	i = 0;
	if(argc == 2)
		first_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
