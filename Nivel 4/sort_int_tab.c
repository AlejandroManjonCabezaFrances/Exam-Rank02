/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 08:27:02 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/11 08:57:27 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	int aux;

	i = 0;
	while(i < (size - 1)) //Para q el indice i no apunte fuera del array
	{
		if(tab[i] > tab[i + 1])
		{
			aux = tab[i];
			tab[i] = tab[i + 1],
			tab[i + 1] = aux;
			i = -1;	//  garantizar se compruebe nuevamente primer element dspes d n cambio
		}
		i++;
	}
}

int main()
{
    int tab[] = {5,8,9,1,2,4,7,5,6,9,6,6};
    unsigned int size = sizeof(tab)/sizeof(int);
    
    // Antes de ordenar
    printf("Antes de ordenar: ");
    for (unsigned int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    
    // Ordenar
    sort_int_tab(tab, size);
    
    // Después de ordenar
    printf("Después de ordenar: ");
    for (unsigned int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    
    return 0;
}
