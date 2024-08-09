/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onosul <onosul@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 10:47:54 by onosul            #+#    #+#             */
/*   Updated: 2024/08/09 11:06:13 by onosul           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int a;


    int *pt1 = &a;

    int **ptr2 = &pt1;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;
    int *****ptr5 = &ptr4;
    int ****** ptr6 = &ptr5;
    int *******ptr7 = &ptr6;
    int ******** ptr8 = &ptr7;
    

    ft_ultimate_ft(&ptr8);

	
}