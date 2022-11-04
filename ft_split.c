/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugarcia < nugarcia@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:31:23 by nugarcia          #+#    #+#             */
/*   Updated: 2022/11/04 16:44:44 by nugarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int wordcount(char *str, char *spa)
{
	int	flag;
	
	flag = 0;
	while (*str)
	{
		if (*spa == *str)
		{
			flag++;
		}
		str++;
	}
	return (flag);
}

char	**ft_split(char const *s, char c)
{
	
}

int main()
{
	printf("%d\n", wordcount("a bb c", " "));
}