/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marabari <marabari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 23:38:27 by marabari          #+#    #+#             */
/*   Updated: 2023/09/07 11:15:25 by marabari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 97)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_put_char(a / 10 + '0');
			ft_put_char(a % 10 + '0');
			ft_put_char(' ');
			ft_put_char(b / 10 + '0');
			ft_put_char(b % 10 + '0');
			ft_put_char(',');
			ft_put_char(' ');
			b++;
		}
		a++;
	}
	write(1, "98 99", 5);
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
