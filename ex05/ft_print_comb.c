/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 19:05:23 by jhyokki           #+#    #+#             */
/*   Updated: 2024/09/05 16:11:31 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//ft_print_comb initializes three integers
//then it prints the value from ints i j k
//3 nested loops for incrementing these 3 integers starting from right
//when ever one number rolls over 9, we increment the next one from left by one
//and reset the one the right to one higher then the left number
//when the i reaches to 7 we stop printing commas
void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				write (1, &i, 1);
				write (1, &j, 1);
				write (1, &k, 1);
				if (i != '7')
					write (1, ", ", 1);
				k++;
			}
			j++;
		}
		i++;
	}
}
