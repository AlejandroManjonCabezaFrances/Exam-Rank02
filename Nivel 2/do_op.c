/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <amanjon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:06:37 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/12 07:53:11 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void do_op(int n1,char ope, int n2)
{
	int result;

	result = 0;
	if(ope == '+')
		result = n1 + n2;
	else if(ope == '-')
		result = n1 - n2;
	else if(ope == '*')
		result = n1 * n2;
	else if(ope == '/')
		result = n1 / n2;
	else if(ope == '%')
		result = n1 % n2;
	printf("%d", result);
	
}

int main(int argc, char **argv)
{
	if(argc == 4)
		do_op(atoi(argv[1]), *argv[2], atoi(argv[3]));
	printf("\n");
	return (0);
}
