/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 10:56:10 by bogoncha          #+#    #+#             */
/*   Updated: 2019/01/15 12:58:41 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int z;

	z = 0;
	while (str[z] != '\0')
	{
		if (str[z] < 'a' || str[z] > 'z')
			return (0);
		++z;
	}
	return (1);
}
