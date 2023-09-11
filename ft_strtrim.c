/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cberneri < cberneri@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:14:37 by cberneri          #+#    #+#             */
/*   Updated: 2023/09/07 15:56:26 by cberneri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char	*memdest;
	size_t	i;
	size_t	j;


	i = 0;
	j = 0;
	
	while(s1[i])
	{
		if(s1[i] == set[j])
			s1[i] == "";
		i++;
		j++;
	}	



	memdest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(set) + 1));
	if (memdest == NULL)
		return (NULL);
	

	

	return (memdest);

}
/*
int main(void)
{
 

}
*/