/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugarcia < nugarcia@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:31:36 by nugarcia          #+#    #+#             */
/*   Updated: 2022/11/08 14:33:47 by nugarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	numcount(int n)
{
	int				i;
	unsigned int	num;

	i = 1;
	num = n;
	if (n < 0)
	{
		num = -n;
		i++;
	}
	while (num > 9)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int				i;
	unsigned int	num;
	char			*ptr;

	ptr = (char *)malloc(numcount(n) + 1);
	if (!ptr)
		return (0);
	i = numcount(n);
	num = n;
	if (n < 0)
	{
		num = -n;
		ptr[0] = '-';
	}
	ptr[i--] = '\0';
	if (num == 0)
		ptr[i] = '0';
	while (num > 0)
	{
		ptr[i--] = num % 10 + 48;
		num /= 10;
	}
	return (ptr);
}

/*int main()
{
	printf("div: \t%d \n",numcount(0));
	printf("Numero  13 -> \t%s \n", ft_itoa(0));
	//printf("Numero -13 -> \t%s \n", ft_itoa(0));
}*/
