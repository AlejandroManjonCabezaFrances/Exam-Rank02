/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 08:41:27 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/03 09:05:02 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rev_print(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	i--;
	while(i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
		rev_print(argv[1]);
	write(1, "\n", 1);
	return (0);
}
