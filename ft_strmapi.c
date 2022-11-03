/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugarcia < nugarcia@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:25:26 by nugarcia          #+#    #+#             */
/*   Updated: 2022/11/03 11:13:56 by nugarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*ptr;
	unsigned int		i;

	if (!s || !f)
		return (0);
	i = 0;
	ptr = ft_strdup(s);
	if (!ptr)
		return (NULL);
	while (i < (ft_strlen(s)))
	{
		ptr[i] = f(i, ptr[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}


/*char f(unsigned int i, char c)
{
	char str;
	str = c + 1;
	return (str);
}

int main()
{
	char str1[] = "abc";
	char* str2;
	str2 = ft_strmapi(str1, ft_isalnum);
	printf("%s\n", str2);
}*/