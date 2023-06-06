/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 08:11:30 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/12 08:06:48 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int i;
	int neg;
	int result;

	i = 0;
	neg = 1;
	result = 0;
	while(str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if(str[i] == '-')
	{
		neg = neg * -1;
		i++;
	}
	else if(str[i] == '+')
		i++;
	while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * neg);

} 

int main(void)
{
	char str[] = "  -+40";

	printf("%d\n", ft_atoi(str));
	printf("%d", atoi(str));
	
	return (0);
}
