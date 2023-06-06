/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:34:50 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/13 10:33:25 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void hidenp(char *s1, char *s2)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while(s1[k] != '\0')
		k++;
	while(s2[j] != '\0')
	{
		if(s1[i] == s2[j])
			i++;
		j++;
	}
	if(i == k)
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

int main(int argc, char **argv)
{
	if(argc == 3)
		hidenp(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
