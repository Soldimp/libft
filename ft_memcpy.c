/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugarcia < nugarcia@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:37:03 by nugarcia          #+#    #+#             */
/*   Updated: 2022/11/10 14:18:47 by nugarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Typecast src and dest addresses to (char *)

/*void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*csrc;
	char	*cdest;
	size_t	i;

	csrc = (char *)src;
	cdest = (char *)dest;
	i = 0;
	if (dest == src || n == 0)
		return (dest);
	if (cdest < csrc)
		return (cdest);
	while (i < n)
	{
		((unsigned char *)cdest)[i] = ((unsigned char *)csrc)[i];
		i++;
	}
	return (cdest);
}*/

//copy memory area.
void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	p;

	p = 0;
	if (dst == src || len == 0)
		return (dst);
	while (p < len)
	{
		((char *)dst)[p] = ((const char *)src)[p];
		p++;
	}
	return (dst);
}
