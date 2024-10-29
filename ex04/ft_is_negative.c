/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:01:24 by jhyokki           #+#    #+#             */
/*   Updated: 2024/09/05 16:02:59 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//ft_is_negative takes in argument n as int
//then it checks wheter n is more or less than 0
//and prints N or P for negative and positive
void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}
