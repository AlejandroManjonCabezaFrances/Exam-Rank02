/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:37:32 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/12 09:34:27 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
	unsigned int aux;

	aux = 1;
	while(aux <= n)
	{
		if(aux == n)
			return (1);
		aux = aux * 2;
	}
	return (0);
}
