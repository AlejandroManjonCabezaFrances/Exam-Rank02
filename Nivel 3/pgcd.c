/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 09:33:04 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/10 09:51:47 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void pgcd(int a, int b)
{
	int n;
	int result;

	n = 1;
	result = 0;
	while(n <= a && n <= b)
	{
		if(a % n == 0 && b % n == 0)
			result = n;
		n++;
	}
	printf("%d", result);
}

int main(int argc, char **argv)
{
	if(argc == 3)
		pgcd(atoi(argv[1]), atoi(argv[2]));
	printf("\n");
	return (0);
}
