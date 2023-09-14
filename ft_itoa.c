/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cberneri < cberneri@student.42prague.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:14:37 by cberneri          #+#    #+#             */
/*   Updated: 2023/09/12 13:52:02 by cberneri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//saco el total de digitos que tiene el numero
static size_t	totaldigits(int n)
{
	int	len;

	len = 0;
	if (n < 1)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

// le doy espacio al string con malloc
static char	*newstring(size_t n)
{
	char	*memdest;

	memdest = (char *)malloc(sizeof(char) * (n + 1));
	if (!memdest)
		return (NULL);
	return (memdest);
}

//esto es para obtener el valor absouto del nro
//valor absoluto es la distancia del numero a cero
//-5 y 5 es la misma distancia a cero
static long long	absnum(long long n)
{
	long long	num;

	//convierto el numero a positivo
	num = 1;
	if (n < 0)
		num *= -n;
	else
		num *= n;
	return (num);
}

char	*ft_itoa(int n)
{
	char		*string;
	unsigned int	num;
	int			sign;
	int			length;

	sign = 0;
	if (n < 0)
		sign = 1;

	length = totaldigits(n);
	string = newstring(length);
	if (!string)
		return (NULL);
	//string + length is a pointer to the location
	//where the null character should be placed
	*(string + length) = '\0';
	num = absnum(n);

	while (length--)
	{
		*(string + length) = 48 + num % 10;
		num = num / 10;
	}
	if (sign)
		*(string) = '-';
	return (string);


	
/*
	char		*str_num;
	size_t		digits;
	long int	num;

	num = n;
	digits = get_digits(n);
	if (n < 0)
	{
		num *= -1;
		digits++;
	}
	if (!(str_num = (char *)malloc(sizeof(char) * (digits + 1))))
		return (NULL);
	*(str_num + digits) = 0;
	while (digits--)
	{
		*(str_num + digits) = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		*(str_num + 0) = '-';
	return (str_num);
*/

}

int main()
{
	int a=154325;
	//char buffer[20];
	//itoa(a,buffer,2);   // here 2 means binary
	printf("value = %s\n", ft_itoa(a));
	
	//printf("Binary value = %s\n", buffer);
	//itoa(a,buffer,10);   // here 10 means decimal
	//printf("Decimal value = %s\n", buffer);

	//itoa(a,buffer,16);   // here 16 means Hexadecimal
 
 
	//printf("Hexadecimal value = %s\n", buffer);
	//ft_itoa(a);
	return 0;

}

/*
int	main(void)
{
	int i = 0;
	int tab[5] = {-2147483648, -42, 0, 42, 2147483647};

	while (i < 5)
		printf("%s\n", ft_itoa(tab[i++]));
	return 0;

}

*/


/*
int	main(void)
{

	printf("%d\n", atoi("---1234ab567"));
	printf("%d\n", atoi("12s3334ab567"));
	printf("%d\n", atoi(" ---+--+1234ab567"));


	printf("%d\n", ft_atoi("---1234ab567"));
	printf("%d\n", ft_atoi("12s3334ab567"));
	printf("%d\n", ft_atoi(" ---+--+1234ab567"));
	return (0);
}
*/