/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 12:32:58 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/12 08:34:11 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(s1[i] != '\0')
	{
		j = 0;
		while(s2[j] != '\0')
		{
			if(s1[i] == s2[j])
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}	
	return (0);
}

int main(void)
{
	char s1[] = "hola caracola";
	char s2[] = "r";

	printf("%s\n", strpbrk(s1, s2));
	printf("%s", ft_strpbrk(s1, s2));

	return (0);
}
