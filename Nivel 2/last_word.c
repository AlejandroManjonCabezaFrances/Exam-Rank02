/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 12:29:54 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/12 09:59:50 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void last_word(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	i--;
	while(str[i] == ' ' || str[i] == '\t')
		i--;
	while(str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
		i--;
	i++;
	while(str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
