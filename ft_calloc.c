/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cberneri < cberneri@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:14:37 by cberneri          #+#    #+#             */
/*   Updated: 2023/09/04 13:56:10 by cberneri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


//allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
//The memory is set to zero.  If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer value that can later be successfully passed to free().
//If the multiplication of nmemb and size would result in integer overflow, then calloc() returns an error.   By  contrast,  an  integer
//overflow would not be detected in the following call to malloc(), with the result that an incorrectly sized block of memory would be allocated:
//malloc(nmemb * size);

void *ft_calloc(size_t nmemb, size_t size)
{
	char	*mem;
	size_t	i;

	i = 0;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		mem[i] = 0;
		i++;
	}
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