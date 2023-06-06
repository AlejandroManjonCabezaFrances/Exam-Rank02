/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 07:22:08 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/11 13:08:38 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	return (s2);
}

/* int main(void)
{
	char	s1[20];
	char	s2[] = "hola caracola";

	printf("%s", ft_strcpy(s1, s2));

	return (0);
} */
