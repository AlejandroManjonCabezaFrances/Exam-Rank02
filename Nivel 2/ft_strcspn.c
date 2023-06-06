/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 10:14:11 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/12 08:18:30 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(s[i] != '\0')
	{
		j = 0;
		while(reject[j] != '\0')
		{
			if(s[i] == reject[j])
				return (i);
			j++;	
		}
		i++;
	}	
	return (i);
}

int main(void)
{
	char s[] = "hola caracola";
	char reject[] = "l";

	printf("%lu\n", ft_strcspn(s, reject));
	printf("%lu", strcspn(s, reject));

	return (0);
}
