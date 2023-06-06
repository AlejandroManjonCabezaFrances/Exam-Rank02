/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 08:51:32 by amanjon-          #+#    #+#             */
/*   Updated: 2023/05/01 08:39:42 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void rostring(char *str)
{
	int i;
	int start;
	int end;
	int flag;

	i = 0;
	start = 0;
	end = 0;
	flag = 0;
	while(str[i] == ' ' || str[i] == '\t')
		i++;
	start = i;
	while(str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
		i++;
	end = i - 1;
	while(str[i] == ' ' || str[i] == '\t')
		i++;
	while(str[i] != '\0')
	{
		while((str[i] == ' ' && str[i+1] == ' ') || (str[i] == '\t' && str[i+1] == '\t'))
			i++;
		if(str[i] == ' ' || str[i] == '\t')
			flag = 1;
		write(1, &str[i], 1);
		i++;
	}
	if(flag)
		write(1, " ", 1);
	while(start <= end)
	{
		write(1, &str[start], 1);
		start++;
	}
}

int main(int argc, char **argv)
{
	if(argc >= 2)
		rostring(argv[1]);
	write(1, "\n", 1);

	return (0);
}

