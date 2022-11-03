/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nugarcia < nugarcia@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:12:30 by nugarcia          #+#    #+#             */
/*   Updated: 2022/11/03 12:05:39 by nugarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	nbr;

	nbr = n + 48;
	if (n >= INT_MIN && n <= INT_MAX)
	{
		if (n == INT_MIN)
		{
			write (fd, "-", 1);
			write (fd, "2", 1);
			write (fd, "147483648", 9);
		}
		else if (n < 0)
		{
			n = -n;
			write (fd, "-", 1);
			ft_putnbr_fd(n, fd);
		}
		else if (n > 9)
		{
			ft_putnbr_fd((n / 10), fd);
			ft_putnbr_fd((n % 10), fd);
		}
		else
			write(fd, &nbr, 1);
	}
}
