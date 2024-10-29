/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 09:42:44 by jhyokki           #+#    #+#             */
/*   Updated: 2024/09/08 17:56:49 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//write num compiles two digit ints to char by initializing two variables
//one variable is used for tens (left digit) and the second units (right)
//to both variables we add string 0 to have the ascii value
//tens are divided by 10 to get only the left num and drop the right
//units are modulod to drop the left num and keep the right one
//write both nums
void	write_num(int n)
{
	char	tens;
	char	units;

	tens = '0' + n / 10;
	units = '0' + n % 10;
	write (1, &tens, 1);
	write (1, &units, 1);
}

//Assign variables i and j to 0 and i+1
//nested loop for iterating through numbers until 98 99
//print first num and then second using write_num func with space between them
//until i reaches 98, keep printing commas after every pair
//increment i and j
void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			write_num (i);
			write (1, " ", 1);
			write_num (j);
			if (i != 98)
				write (1, ", ", 2);
			j++;
		}
		i++;
	}
}
