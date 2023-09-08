/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StdReplace.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jokin </var/mail/jokin>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 11:27:00 by jokin             #+#    #+#             */
/*   Updated: 2023/07/06 08:57:10 by jokin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STDREPLACE_HPP
#define STDREPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

void	clearTerminal(void);
void	rpStringInFile(const std::string& filename, const std::string& s1, const std::string& s2);

#endif
