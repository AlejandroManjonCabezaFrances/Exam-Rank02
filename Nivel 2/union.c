/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:30:53 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/12 12:19:55 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check(char c, char *str, int k)
{
	int i;

	i = 0;
	while(i < k)
	{
		if(str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void ft_union(char *s1, char *s2)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while(s1[i] != '\0')
		i++;
	while(s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	
	while(k <= i)
	{
		if(check(s1[k], s1, k) == 1)
			write(1, &s1[k], 1);
		k++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);

	return (0);
}
