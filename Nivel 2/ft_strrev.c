/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:27:45 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/12 08:41:07 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strrev(char *str)
{
	int i;
	int j;
	int aux;

	i = 0;
	j = 0;
	aux = 0;
	while(str[i] != '\0')
		i++;
	i--;
	while(i > j)
	{
		aux = str[i];
		str[i] = str[j];
		str[j] = aux;
		i--;
		j++;
	}
	return (str);
}

int main(void)
{
	char str[] = "hola";
	printf("%s", ft_strrev(str));

	return (0);
}
