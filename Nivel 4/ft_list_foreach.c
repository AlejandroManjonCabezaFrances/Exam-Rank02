/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 07:55:49 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/11 09:10:14 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while(begin_list != '\0')
	{
		if(begin_list->data)
			(*f)(begin_list->data);
		begin_list = begin_list->next;
	}	
}
