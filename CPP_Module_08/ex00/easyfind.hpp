/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:29:46 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/22 16:02:54 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <sstream>
#include <vector>
#include <deque>
#include <algorithm>

#define END "\033[0m"
#define BLACK "\e[4;30m"
#define RED "\e[1;31m"

#define BCYAN "\e[46m"
#define BBLACK "\e[47m"

template<typename T>
void	easyfind(T&	vector, int data)  {
	typename T::iterator pointerToNumber = std::find(vector.begin(), vector.end(), data);

	if (pointerToNumber != vector.end() && *pointerToNumber == data) {
		std::cout << "[easyfind] Congratulations! " << *pointerToNumber << " has been found!" << std::endl;
	}
	else {
		std::ostringstream	oss;
		oss << "[easyfind] error: " << data << " has NOT been found..." << std::endl;
		throw std::runtime_error(oss.str());
		
		// std::cerr << "[easyfind] error: " << data << " has NOT been found..." << std::endl;
		// return 1;
	}
}



#endif