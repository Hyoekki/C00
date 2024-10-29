/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:01:18 by jhyokki           #+#    #+#             */
/*   Updated: 2024/09/05 15:53:43 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//print_rev_alpha function initializes variable char c
//Assign variable c to z
//while loop prints the alphabet from variable c and decrements it
//until it the c variable reaches alphabet a
void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}
