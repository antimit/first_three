/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onosul <onosul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 13:24:14 by onosul            #+#    #+#             */
/*   Updated: 2024/08/08 19:13:30 by onosul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_count(char num1[], char num2[], int i, int j);

void	ft_print_comb2(void)
{
	char	num1[2];
	char	num2[2];
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_count(num1, num2, i, j);
			j++;
		}
		i++;
	}
}

void	ft_count(char num1[], char num2[], int i, int j)
{
	num1[0] = i / 10 + '0';
	num1[1] = i % 10 + '0';
	num2[0] = j / 10 + '0';
	num2[1] = j % 10 + '0';
	write(1, &num1[0], 1);
	write(1, &num1[1], 1);
	write(1, " ", 1);
	write(1, &num2[0], 1);
	write(1, &num2[1], 1);
	if (!(i == 98 && j == 99))
	{
		write(1, ", ", 2);
	}
}
