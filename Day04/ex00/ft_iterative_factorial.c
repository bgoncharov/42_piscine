/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 12:38:55 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/12 19:56:44 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;

	res = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 0)
		res *= nb--;
	return (res);
}
