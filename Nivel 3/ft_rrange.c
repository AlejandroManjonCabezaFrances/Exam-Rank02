/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:43:05 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/13 10:03:00 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int i;
	int *ptr;
	int size;

	i = 0;
	size = 0;
	if(end > start)
		size = (end - start);
	if(start > end)
		size = (start - end);
	ptr = malloc(sizeof(int) * (size + 1));
	if(ptr == NULL)
		return (NULL);
	if (start >= end)
	{
		while(start >= end)
		{
			ptr[i] = end;
			end++;
			i++;
		}
	}
	else if (end >= start)
	{
		while(end >= start)
		{
			ptr[i] = end;
			end--;
			i++;
		}
	}
	return (ptr);
}

int main()
{
    int start = 2;
    int end = 3;
    int *ptr;
    int size, i;

    ptr = ft_rrange(start, end);
    if (ptr == NULL)
        return 1;

    if (start > end)
        size = start - end;
    else
        size = end - start;
	/*
    printf("The array contains %d elements:\n", size + 1);
	*/
    i = 0;
    while (i <= size)
    {
        printf("%d ", ptr[i]);
        i++;
    }
    printf("\n");
    free(ptr);
    return 0;
}

