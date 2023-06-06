/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 10:58:41 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/06 11:10:31 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void expand_str(char *str)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while(str[k] != '\0')
		k++;
	k--;
	while(str[k] == ' ' || str[k] == '\t')
		k--;
	while(str[j] == ' ' || str[j] == '\t')
		j++;
	while(str[i] != '\0' && i <= k)
	{
			while(str[i] == ' ' || str[i] == '\t')
				i++;
			if(str[i -1] == ' ' && i > j)
				write(1, "   ", 3);
			write(1, &str[i], 1);
			i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
		expand_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}
