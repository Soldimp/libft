/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:25:26 by nugarcia          #+#    #+#             */
/*   Updated: 2022/11/09 18:14:28 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//create new string from modifying string with specified function.

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