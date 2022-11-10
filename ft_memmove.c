/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugarcia < nugarcia@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:34:26 by nugarcia          #+#    #+#             */
/*   Updated: 2022/11/10 11:57:29 by nugarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*csrc;
	char	*cdest;
	size_t	i;

	csrc = (char *)src;
	cdest = (char *)dest;
	if (!src && !dest)git
		return (0);
	i = 0;
	while (i < len || cdest[i] == csrc[i])
	{
		((unsigned char *)cdest)[i] = ((unsigned char *)csrc)[i];
		i++;
	}
	return (cdest);
}*/

//copy byte string.
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*a;
	char	*b;

	a = (char *)src;
	b = dst;
	if (a < b)
	{
		while (len--)
			b[len] = a[len];
	}
	else
		ft_memcpy(b, a, len);
	return (dst);
}
