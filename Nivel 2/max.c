/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 14:17:44 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/12 11:00:34 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h> 

/* void	ft_putchar(char c)
{
	write(1, &c, 1);
} */

int		max(int* tab, unsigned int len)
{
	int i;
	int result;

	i = 0;
	result = tab[0];
	if(len <= 0 || tab == NULL)
		return (0);
	while(i < (int)len)
	{
		if(tab[i] > result)
			result = tab[i];
		i++;
	}
	return (result);
}

/*
otra manera de hacerlo
int		max(int* tab, unsigned int len)
{
	int i;
	int tmp;
	
	i = 1;
	while (i < len - 1)
	{
		if (tab[i] < tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
	return (tab[0]);
}
*/

int main(void)
{
	int tab[] = {5, 6 , 3 , 2};
	int len;

	len = 3;
	printf("%d", max(tab, len));
	return (0);
}


