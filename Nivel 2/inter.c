/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 10:59:17 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/12 09:14:23 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void inter(char *s1, char *s2)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	
	while(s1[i] != '\0')
	{
		j = 0;
		while(s2[j] != '\0')
		{
			if(s1[i] == s2[j])
			{
				k = 0;
				while(s1[k] != s1[i])
					k++;
				if(k == i)
				{
					k = 0;
					while(s2[k] != s2[j])
						k++;
					if(k == j)
						write(1, &s1[i], 1);
				}
			}
			j++;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
