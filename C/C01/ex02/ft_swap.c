/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgavrila <cgavrila@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 22:13:27 by cgavrila          #+#    #+#             */
/*   Updated: 2026/02/10 22:50:09 by cgavrila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(void)
{
	int	n1;
	int	n2;

	n1 = 21;
	n2 = 42;
	printf("Antes: n1 = %d, n2 = %d\n", n1, n2);
	ft_swap(&n1, &n2);	
 printf("Después: n1 = %d, n2 = %d\n", n1, n2);
	return (0);
}
