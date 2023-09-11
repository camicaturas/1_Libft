/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cberneri < cberneri@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:09:57 by cberneri          #+#    #+#             */
/*   Updated: 2023/08/21 16:42:45 by cberneri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//strrchr searches for the last occurrence of the character c (an unsigned char) in the string pointed to, by the argument str.

char	*ft_strrchr(const char *str, int c)
{
	unsigned char	*ptr;
	int 	i;

	ptr = (unsigned char *)str;
	i = strlen(str); 
	while (i >= 0)
	{
		if(ptr[i] == c)
		{
			return ((char *)&ptr[i]);
		}
		i--;
	}

return (NULL);

}
/*
int main()
{
char *str = "Hola como estas";
printf("strrchr: %s\n", strrchr(str, 'c'));
printf("ft_strrchr: %s\n", ft_strrchr(str, 'c'));
}
*/