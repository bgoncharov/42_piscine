/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 11:05:33 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/15 12:59:15 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int z;

	z = 0;
	while (str[z] != '\0')
	{
		if (str[z] < 'A' || str[z] > 'Z')
			return (0);
		++z;
	}
	return (1);
}
