/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cberneri < cberneri@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:14:37 by cberneri          #+#    #+#             */
/*   Updated: 2023/09/26 13:28:51 by cberneri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	size_t	max;

	if (nmemb == 0 || size == 0)
	{
		mem = malloc(0);
		return (mem);
	}
	max = nmemb * size;
	if (max / nmemb != size)
		return (NULL);
	mem = malloc(nmemb * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, size * nmemb);
	return (mem);
}

/*
int main()
{
    // This pointer will hold the
    // base address of the block created
    int* ptr;
 	int* ptr2;
    int n, i, j;
    // Get the number of elements for the array
    n = 5;
    printf("Enter number of elements: %d\n", n);
    // Dynamically allocate memory using calloc()
    ptr = (int*)calloc(n, sizeof(int));
 	ptr2 = (int*)ft_calloc(n, sizeof(int));
    // Check if the memory has been successfully
    // allocated by calloc or not
    if ((ptr == NULL) || (ptr2 == NULL)) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
        // Memory has been successfully allocated
        printf("Memory successfully allocated using calloc.\n");
        // Get the elements of the array
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }
        // Print the elements of the array
        printf("The elements of the calloc array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
     // Get the elements of the array
        for (j = 0; j < n; ++j) {
            ptr2[j] = j + 1;
        }
        // Print the elements of the array
        printf("\nThe elements of the ft_calloc array are: ");
        for (j = 0; j < n; ++j) {
            printf("%d, ", ptr2[j]);
        }
    }
    return 0;
}
*/