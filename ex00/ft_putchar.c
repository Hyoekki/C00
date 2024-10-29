/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:49:47 by jhyokki           #+#    #+#             */
/*   Updated: 2024/09/05 15:45:32 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//write is a UNIX system call function for printing in standard output
//The first argument is a file descriptor ("1" for terminal)
//Second argument is a char array where the data is coming from or going to
//Third argument is a number of bytes to transfer (1 for single char at a time)
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
