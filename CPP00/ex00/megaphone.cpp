/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <jgirard-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 19:43:18 by jgirard-          #+#    #+#             */
/*   Updated: 2023/06/21 16:33:06 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if(ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (ac = 1; av[ac]; ++ac)
	{
		for (int j = 0; av[ac][j]; ++j)
			av[ac][j] = toupper(av[ac][j]);
		std::cout << av[ac];
	}
	std::cout << std::endl;
}
