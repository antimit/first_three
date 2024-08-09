/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onosul <onosul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 12:43:20 by onosul            #+#    #+#             */
/*   Updated: 2024/08/09 12:48:25 by onosul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int i = 0;

	int j = size - 1;

	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;

		i++;
		j--;
	}
}

int main()
{
    int arr [] = {1,2,3,4,5};
    int size = 5;

    ft_rev_int_tab(arr,size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}