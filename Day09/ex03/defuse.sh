# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    defuse.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bogoncha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/18 10:27:41 by bogoncha          #+#    #+#              #
#    Updated: 2019/01/18 15:46:18 by bogoncha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

echo $(($(stat -f%a bomb.txt) -1 ));