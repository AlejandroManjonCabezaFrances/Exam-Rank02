/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 09:00:04 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/11 09:24:54 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int aux;
	t_list *temp;

	temp = lst
	while(lst->next != '\0')
	{
		if(((*cmp) (lst->data, lst->next->data)) == 0)
		{
			aux = lst->data;
			lst->data = lst->next->data;
			lst->next->data = aux;
			lst = temp;
		}
		else
			lst = lst->next;
	}
	lst = temp;
	return (lst);
}
