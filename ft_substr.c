/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugarcia < nugarcia@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:04:36 by nugarcia          #+#    #+#             */
/*   Updated: 2022/11/07 14:24:20 by nugarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t		j;
	char		*dest;

	j = 0;
	if (start > ft_strlen(str))
	{
		dest = (char *)malloc(sizeof(char));
		*dest = 0;
		return (dest);
	}
	if (len >= ft_strlen(str))
		len = ft_strlen(str) - start;
	dest = (char *)malloc(len + 1);
	if (!dest)
		return (NULL);
	while (start < ft_strlen(str) && j < len)
	{
		dest[j++] = str[start++];
	}
	dest[j] = '\0';
	return (dest);
}

/*int main()
{
    char src[] = "substr function Implementation";
 
    int m = 7;
    int n = 5;
 
    char* dest = ft_substr(src, m, n);
 
    printf("%s\n", dest);
 
    return 0;
}*/