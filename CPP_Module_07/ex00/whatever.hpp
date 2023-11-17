/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:12:15 by jaizpuru          #+#    #+#             */
/*   Updated: 2023/11/17 17:54:20 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

#define END "\033[0m"
#define BLACK "\e[4;30m"
#define RED "\e[1;31m"

#define BCYAN "\e[46m"
#define BBLACK "\e[47m"

template <typename T>
T	min(const T& lhs, const T& rhs) {
	return lhs > rhs ? rhs : lhs;
}

template <typename L>
L	max(const L& lhs, const L& rhs) {
	return lhs > rhs ? lhs : rhs;
}

template <typename S>
void swap(S& arg1, S& arg2) {
    S temp = arg1;
    arg1 = arg2;
    arg2 = temp;
}

#endif
