/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugarcia < nugarcia@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:37:20 by nugarcia          #+#    #+#             */
/*   Updated: 2022/10/26 12:12:10 by nugarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*memset() is used to fill a block of memory with a particular value.
The syntax of memset() function is as follows :

// ptr ==> Starting address of memory to be filled
// x   ==> Value to be filled
// len   ==> Number of bytes to be filled starting 
//         from ptr to be filled
void *memset(void *ptr, int x, size_t n);
A void pointer, so that we can pass any type of pointer to this function.
*/
void	*ft_memset(void *ptr, int x, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)ptr)[i] = x;
		i++;
	}
	return (ptr);
}
