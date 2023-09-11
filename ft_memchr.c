/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cberneri < cberneri@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:14:37 by cberneri          #+#    #+#             */
/*   Updated: 2023/08/21 14:20:50 by cberneri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//searches for the first occurrence of the character c (an unsigned char) in the first n bytes of the string pointed to, by the argument str.
//This function returns a pointer to the matching byte or NULL if the character does not occur in the given memory area.
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*alts;
	size_t				i;

	alts = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (alts[i] == (unsigned char)c)
			return (&alts[i]);
		i++;
	}
	return (NULL);
}

/*
int main()
{
const char str[] = "Camilo Berneri";
const char ch = 'l';
char *ret;
ret = ft_memchr(str, ch, 4);
printf("String after |%c| is - |%s|\n", ch, ret);
return(0);
}
*/