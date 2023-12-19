/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jenny <jenny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 18:18:55 by jenny             #+#    #+#             */
/*   Updated: 2023/11/20 19:06:08 by jenny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	if (ac > 1){
		for (int i = 1; i < ac; i++){
			std::string str = av[i];
			for (int j = 0; av[i][j] != '\0'; j++)
				str[j] = toupper(str[j]);
			std::cout << str;
		}
		std::cout << std::endl;
		return (0);
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}
