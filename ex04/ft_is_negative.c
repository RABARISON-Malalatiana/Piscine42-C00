/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marabari <marabari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:33:22 by marabari          #+#    #+#             */
/*   Updated: 2023/09/07 13:45:49 by marabari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	a;
	char	b;

	a = 'N';
	b = 'P';
	if (n <= 0)
	{
		write(1, &a, 1);
	}
	else
	{
		write(1, &b, 1);
	}
}

/*int	main(void)
{
	int	test;

	test = 85;
	ft_is_negative(test);
	return (0);
}*/
