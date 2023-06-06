/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 11:10:52 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/06 11:49:57 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi_base(const char *str, int str_base)
{	
    int i;
    int result;
    int neg;

	i = 0;
	result = 0;
	neg = 1;
    if (str[i] == '-')
    {
        neg = -1;
        i++;
    }

    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
            result = result * str_base + str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            result = result * str_base + str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            result = result * str_base + str[i] - 'A' + 10;
        i++;
    }
    return (neg * result);
}
/* int	ft_atoi_base(const char *str, int str_base)
{	
	int i;
	int neg;
	int result;

	i = 0;
	neg = 1;
	result = 0;
	if(str[i] == '-')
	{
		neg = -1;
		i++;
	}
	while(str[i] != '\0')
	{
		if(str[i] >= '0' && str[i] <= '9')
			result = result * str_base + (str[i] - '0');
		else if(str[i] >= 'a' && str[i] <= 'z')
			result = result * str_base + (str[i] - 'W');
		else if(str[i] >= 'A' && str[i] <= 'Z')
			result = result * str_base + (str[i] - '7');
		i++;
	}
	return (result * neg);
} */

int	main(void)
{
	printf("%d\n", ft_atoi_base("A", 16));
	printf("%d\n", ft_atoi_base("B", 16));
	printf("%d\n", ft_atoi_base("C", 16));
	printf("%d\n", ft_atoi_base("D", 16));
	printf("%d\n", ft_atoi_base("e", 16));
	printf("%d\n", ft_atoi_base("E", 16));
	return (0);
}


/* int main(void)
{
    char    str[5] = "-3080";
    int     str_base = 16;
    printf("%i" , ft_atoi_base(str, str_base));
    return(0);
}  */



/* int ft_atoi_base(const char *str, int str_base)
{	
    int i;
    int result;
    int sign;

	i = 0;
	result = 0;
	sign = 1;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }

    while (str[i] != '\0')
    {
        int digit_value;

        if (str[i] >= '0' && str[i] <= '9')
            digit_value = str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            digit_value = str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            digit_value = str[i] - 'A' + 10;
        else
            return 0;
        if (digit_value >= str_base)
            return 0; 
        result = result * str_base + digit_value;
        i++;
    }
    return (sign * result);
} */