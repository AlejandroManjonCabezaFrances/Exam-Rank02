/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 07:22:50 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/13 10:49:46 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int lcm;

	if(a == 0 || b == 0)
		return (0);
	if(a > b)
		lcm = a;
	if(b > a)
		lcm = b;
	while(1)
	{
		if(lcm % a == 0 && lcm % b == 0)
			return(lcm);
		lcm++;
	}
}

int	main(void)
{
	printf("%u\n", lcm(5, 10));
	return (0);
}
