/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugarcia < nugarcia@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:36:48 by nugarcia          #+#    #+#             */
/*   Updated: 2022/10/27 11:19:14 by nugarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t len)
{
	unsigned char	*s2;
	unsigned char	d;
	size_t			i;

	i = 0;
	s2 = (unsigned char *)str;
	d = (unsigned char)c;
	while (i < len && s2[i] != d)
		i++;
	if (i < len && s2[i] == d)
		return (&s2[i]);
	return (NULL);
}
