/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 14:29:01 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/11 13:04:27 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void small_putnbr(int n)
{
	if(n >= 10)
	{
		small_putnbr(n / 10);
		small_putnbr(n % 10);
	}
	else
	{
		n = n + '0';
		write(1, &n, 1);
	}
}

void fizzbuzz(int n)
{
	if(n % 15 == 0)
		write(1, "fizzbuzz", 8);
	else if(n % 3 == 0)
		write(1, "fizz", 4);
	else if(n % 5 == 0)
		write(1, "buzz", 4);
	else
		small_putnbr(n);
}

int main(void)
{
	int n;

	n = 1;
	while(n <= 100)
	{
		fizzbuzz(n);
		write(1, "\n", 1);
		n++;
	}
	return (0);
}
