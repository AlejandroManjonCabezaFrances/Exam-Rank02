/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 07:25:19 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/11 07:55:06 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int size_mem(int n)
{
	int i;

	i = 0;
	if(n == 0)
		return (0);
	if(n < 0)
	{
		n = n * (-1);
		i++;
	}
	while(n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char *copy_mem(int k, char *ptr, long n)
{
	if(n == 0)
	{
		ptr[0] = '0';
		return (ptr);
	}
	if(n < 0)
	{
		ptr[0] = '-';
		n = n * (-1);
	}
	k--;
	while(k >= 0 && n != 0)
	{
		ptr[k] = n % 10 + '0';
		n = n / 10;
		k--;
	}
	return (ptr);
}

char	*ft_itoa(int nbr)
{
	long n;
	int k;
	char *ptr;

	n = nbr;
	k = size_mem(n);
	ptr = malloc(sizeof(char) * (k + 1));
	if(ptr == NULL)
		return (NULL);
	ptr[k] = '\0';
	return (copy_mem(k, ptr, n));
	
}

int main(void)
{
	printf("%s", ft_itoa(-388));

	return (0);
}
