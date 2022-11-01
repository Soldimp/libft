/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugarcia < nugarcia@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:11:33 by nugarcia          #+#    #+#             */
/*   Updated: 2022/10/31 10:51:12 by nugarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*allome;

	allome = malloc(nmemb * size);
	if (!allome)
		return (NULL);
	ft_memset(allome, '\0', (nmemb * size));
	return (allome);
}
