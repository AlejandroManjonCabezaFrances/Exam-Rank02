/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 10:44:06 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/12 08:26:08 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int i;
	char *ptr;

	i = 0;
	while(src[i] != '\0')
		i++;
	ptr = malloc(sizeof(char) * (i + 1));
	if(ptr == NULL)
		return (NULL);
	i = 0;
	while(src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int main(void)
{
	char src[] = "allocate memory";

	printf("%s", ft_strdup(src));
	return (0);
}
