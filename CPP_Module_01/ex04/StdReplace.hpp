/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StdReplace.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 11:27:00 by jokin             #+#    #+#             */
/*   Updated: 2023/09/19 12:40:34 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STDREPLACE_HPP
#define STDREPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>

/**
 * @brief 
 * 
 */
void	clearTerminal(void);
void	rpStringInFile(const std::string& filename, const std::string& s1, const std::string& s2);

#endif
