/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cberneri < cberneri@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:09:57 by cberneri          #+#    #+#             */
/*   Updated: 2023/09/05 17:10:20 by cberneri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//searches for the first occurrence of the character c (an unsigned char) in the string pointed to by the argument str.
//This returns a pointer to the first occurrence of the character c in the string str, or NULL if the character is not found.

char	*ft_strchr(const char *str, int c)
{
//	unsigned char	*ptr;
//	int 	i;

	//ptr = (unsigned char *)str;


	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (0);
	
/*	
	i = 0;
	while (ptr[i] != (unsigned char)c)
	{
		if (*ptr == '\0')
			return (NULL);
		i++;
	}

	while (ptr[i] != '\0')
	{
		if(ptr[i] == (unsigned char)c)
			return ((char *)&ptr[i]);
		i++;
	}
return ((char *)&ptr[i]);
*/

}
/*
int main()
{
char *str = "Hello, How are you?";
printf("strrchr: %s\n", strchr(str, 'w'));
printf("ft_strrchr: %s\n", ft_strchr(str, 'w'));
}
*/