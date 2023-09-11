/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cberneri < cberneri@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:09:57 by cberneri          #+#    #+#             */
/*   Updated: 2023/09/06 19:37:14 by cberneri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//locates the first occurrence of the null-terminated string little in the string big
//where not more than len characters are searched. Characters that appear after a character are not searched
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;

	j = 0;
	i = 0;

	if (!big || !little)
		return (NULL);
	if (!little || !little[0])
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && little[j] && i + j < len 
			&& big[i + j] == little[j])
			j++;
		if (!little[j])
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}


/*
char *strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	size_t needle_len;

	if (0 == (needle_len = strnlen(needle, len)))
		return (char *)haystack;

	for (i=0; i<=(int)(len-needle_len); i++)
	{
		if ((haystack[0] == needle[0]) &&
			(0 == strncmp(haystack, needle, needle_len)))
		return (char *)haystack;

		haystack++;
	}
	return NULL;
}
*/


/*
int main ()
{
const char haystack[20] = "Camilo Berneri";
const char needle[10] = "il";
char *result;

const char haystack2[20] = "Camilo Berneri";
const char needle2[10] = "il";
char *result2;



result = ft_strnstr(haystack, needle, 7);
printf("The substring is: %s\n", result);

result2 = strnstr(haystack2, needle2, 7);
printf("The substring is: %s\n", result2);

return(0);
}
*/