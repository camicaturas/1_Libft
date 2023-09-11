/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cberneri < cberneri@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:14:37 by cberneri          #+#    #+#             */
/*   Updated: 2023/08/25 14:50:27 by cberneri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//returns a pointer to a new string which is a duplicate of the string s.
//Memory for the new string is obtained with malloc(3), and can be freed with free(3).
// On success, the strdup() function returns a pointer to the duplicated string.
//It returns NULL if insufficient memory was available, with errno set to indicate the cause of the error.

char *ft_strdup(const char *s)
{
	char *ptr;

	if (!(ptr = malloc(ft_strlen(s) + 1)))
		return (NULL);
	ft_memcpy(ptr, s, ft_strlen(s) + 1);
		return (ptr);
}


/*
int main()
{
    char *src = "Hello, world!";
    char *duplicate = ft_strdup(src);
    if (duplicate != NULL)
    {
        printf("Original string: %s\n", src);
        printf("Duplicated string: %s\n", duplicate);
        free(duplicate);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }
    return 0;
}
*/