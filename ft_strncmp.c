/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugarcia < nugarcia@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:32:33 by nugarcia          #+#    #+#             */
/*   Updated: 2022/10/31 15:16:09 by nugarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0)
		return (0);
	while (str1[i] == str2[i] && str1[i] && str2[i] && i < (len - 1))
		i++;
	return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
}
