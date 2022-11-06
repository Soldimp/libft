/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuno <nuno@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:31:23 by nugarcia          #+#    #+#             */
/*   Updated: 2022/11/06 17:09:13 by nuno             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int wordcount(char const *str, char *separ)
{
	int i;
	int flag;

	i = 0;
	flag = 0;
	while (*str)
	{
		if (*str != *separ && flag == 0)
		{
			flag = 1;
			i++;
		}
		else if (*str == *separ)
			flag = 0;
		str++;
	}
	return (i);
}

static int	ft_size_word(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		wordsize;
	char	**newstr;
	int		j;
	int		strsize;

	i = 0;
	j = -1;
	wordsize = wordcount(s,c);
	newstr = malloc((wordsize + 1) * sizeof(char *));
	if (!newstr)
		return (NULL);
	while (++j < wordsize)
	{
		while (s[i] == c)
			i++;
		strsize = ft_size_word(s, c, i);
		newstr[j] = ft_substr(s, i, strsize);
		i += strsize;
	}
	newstr[j] = '\0';
	return (newstr);
}

int main()
{
	char str[] = "Geeks for Geeks";
    char **token = ft_split(str, " ");
    	printf("first: %d\n", wordcount(str, " "));
		printf("second: %s\n", token[1]);
		printf("third: %s\n", token[2]);
    return 0;
}