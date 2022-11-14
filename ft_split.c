/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugarcia < nugarcia@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:31:23 by nugarcia          #+#    #+#             */
/*   Updated: 2022/11/14 10:53:09 by nugarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	wordcount(char const *str, char separ)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (*str)
	{
		if (*str != separ && flag == 0)
		{
			flag = 1;
			i++;
		}
		else if (*str == separ)
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
	wordsize = wordcount(s, c);
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
	newstr[j] = NULL;
	return (newstr);
}

/*int	main(void)
{
	int		index;
	char	**split;
	split = ft_split("          ", ' ');
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
}*/
