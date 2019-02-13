/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 11:35:48 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/22 09:08:57 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int x;
	int count;

	x = 0;
	count = 0;
	while (tab[x])
	{
		if ((*f)(tab[x]) == 1)
			count += 1;
		x++;
	}
	return (count);
}
