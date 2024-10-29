/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:01:21 by jhyokki           #+#    #+#             */
/*   Updated: 2024/09/05 15:58:00 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//ft_print_nb initialises variable i as char
//i is then assinged value '0', quotes are needed since its char not int
//while loop prints value from variable i and increments it by one
//until it reaches to char '9' and stops (quotes for char)
void	ft_print_numbers(void)
{
	char	i;

	i = '0';
	while (i <= '9')
	{
		write(1, &i, 1);
		i++;
	}
}
