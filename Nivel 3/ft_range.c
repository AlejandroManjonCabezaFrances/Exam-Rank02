/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 11:50:41 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/13 09:51:06 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int *ptr;
	int size;
	int i;

	i = 0;
	size = 0;
	if(start > end)
		size = (start - end);
	if(end > start)
		size = (end - start);
	ptr = malloc(sizeof(int) * (size + 1));
	if(ptr == NULL)
		return (NULL);
	if(start >= end)
	{
		while(start >= end)
		{
			ptr[i] = start;
			start--;
			i++;
		}
	}
	else if(start <= end)
	{
		while(start <= end)
		{
			ptr[i] = start;
			start++;
			i++;
		}
	}
	return (ptr);
}

int main()
{
    int start = 0;
    int end = -3;
    int *ptr;
    int size, i;

    ptr = ft_range(start, end);
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

/* int main()
{
	int start = 0;
	int end = -3;
    int *ptr;
    int size, i;

	i = 0;
    ptr = ft_range(start, end);

    if (ptr == NULL)
        return 1;

    if (start > end)
        size = start - end;
    else
        size = end - start;
    printf("The array contains %d elements:\n", size + 1);
    while (i <= size)
    {
        printf("%d ", ptr[i]);
		i++;
    }
    printf("\n");

    free(ptr);
    return 0;
} */
