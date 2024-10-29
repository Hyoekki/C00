/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:01:13 by jhyokki           #+#    #+#             */
/*   Updated: 2024/09/05 15:48:52 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//Print alphabet is used to print all chars from a to z
//First we define variable "c" as char
//Then we assing char 'a' to variable 'c'
//Last the while loop is printing whatever char is at var 'c'
//and incrementing variable c until it reaches to 'z' and stops
void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}
