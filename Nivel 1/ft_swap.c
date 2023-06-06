/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 07:33:28 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/11 13:08:33 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/* int main(void)
{
	int a;
	int b;

	a = 5;
	b = 10;

	printf("valor de a=%d y valor de b=%d", (int)a, (int)b);
	ft_swap(&a, &b);
	printf("valor de a=%d y valor de b=%d", (int)a, (int)b);
	return (0);
} */
