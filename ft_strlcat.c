/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugarcia < nugarcia@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:16:56 by nugarcia          #+#    #+#             */
/*   Updated: 2022/11/10 12:05:41 by nugarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_idx;
	size_t	d_len;
	size_t	s_len;
	size_t	s_idx;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	d_idx = d_len;
	s_idx = 0;
	if (size == 0 || size <= d_idx)
		return (s_len + size);
	while (((unsigned char *)src)[s_idx])
	{
		if (d_idx == (size - 1))
			break ;
		((unsigned char *)dst)[d_idx] = ((unsigned char *)src)[s_idx];
		d_idx++;
		s_idx++;
	}
	dst[d_idx] = '\0';
	return (d_len + s_len);
}

/*int main()
{
	char dest[] = "BBBB";
	char source[] = "AAAAAAAAA";
	printf("Fake \t\t-> %zu \n", ft_strlcat(dest, source, 1));	
}*/
