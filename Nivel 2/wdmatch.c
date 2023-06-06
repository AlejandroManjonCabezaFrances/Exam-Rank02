/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:59:40 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/06 08:06:09 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void wdmatch(char *s1, char *s2)
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
	{
		i = 0;
		while(s1[i] != '\0')
		{
			write(1, &s1[i], 1);
			i++;
		}
	}
}

int main(int argc, char **argv)
{
	if(argc == 3)
		wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);	
	return (0);
}
