/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugarcia < nugarcia@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:12:49 by nugarcia          #+#    #+#             */
/*   Updated: 2022/10/31 15:01:35 by nugarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (find[0] == '\0')
		return ((char *)str);
	while (str[i])
	{
		j = 0;
		while ((str[i + j] == find[j]) && (i + j) < len)
		{
			if (str[i + j] == '\0' && find[j] == '\0')
				return ((char *)&str[i]);
			j++;
		}
		if (find[j] == '\0')
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
