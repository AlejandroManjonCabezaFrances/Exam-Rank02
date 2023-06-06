/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 10:32:15 by amanjon-          #+#    #+#             */
/*   Updated: 2023/04/11 12:34:50 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rev_wstr(char *str)
{
	int i;
	int start;
	int end;
	int flag;

	i = 0;
	while(str[i])
		i++;
	while(i >= 0)
	{
		while(str[i] == '\0' || str[i] == ' ' || str[i] == '\t')
			i--;
		end = i;
		while(i >= 0 && str[i] != ' ' && str[i] != '\t')
			i--;
		/* i++; */
		start = i + 1;
		flag = start;
		while(start <= end)
		{
			write(1, &str[start], 1);
			start++;
		}
		if(flag != 0)
			write(1, " ", 1);	
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
		rev_wstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
