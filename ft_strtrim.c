/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cberneri < cberneri@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:14:37 by cberneri          #+#    #+#             */
/*   Updated: 2023/09/13 14:29:18 by cberneri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*memdest;
	int	i;
//	size_t	j;
	int totalchars;

	i = 0;
	//j = 0;
	
	if (!s1 || !set)
		return (NULL);

	totalchars = ft_strlen(s1);
		printf("totalchars %d\n", totalchars);

		
	while(ft_strchr(set, s1[i]) && *s1 !='\0')
	{
		printf("encontrado\n");
		i++;
		/*
		if(s1[i] == set[j])
			s1[i] == "";
		i++;
		j++;
		*/
	}	


	memdest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(set) + 1));
	if (memdest == NULL)
		return (NULL);
	

	

	return (memdest);

}
/*
int main(void)
{
	ft_strtrim("camilo", "cc");
}
*/