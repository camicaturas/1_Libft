/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cberneri < cberneri@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:32:44 by cberneri          #+#    #+#             */
/*   Updated: 2023/09/07 15:21:18 by cberneri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if(s)
	{
		//mientras que el puntero S no sea el NULL Terminator
		while (*s)
			write(fd, s++, 1);
		write(fd, "\n", 2);
	}
}
/*
int main(void)
{
	ft_putendl_fd("Hello13123122313oo",1);
}
*/