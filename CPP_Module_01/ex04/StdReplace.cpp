/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StdReplace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jokin </var/mail/jokin>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 11:27:28 by jokin             #+#    #+#             */
/*   Updated: 2023/07/06 09:00:45 by jokin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StdReplace.hpp"

void	clearTerminal() {
	std::cout << "\033[2J\033[1;1H";
}

void	rpSubstr(std::string& buf, size_t pos, const std::string s1, const std::string& s2) {
	buf = buf.substr(0, pos) + s2 + buf.substr(pos + s1.length());
	return ; }

void	rpStringInFile(const std::string& filename, const std::string& s1, const std::string& s2) {
	std::ifstream		input(filename.c_str());
	if (!input.is_open()) {
		clearTerminal();
		std::cerr << "File not found" << std::endl;
		return ; }
	std::stringstream	StrBuf;
	std::string		Buf;
	size_t			pos;
	std::ofstream		output((filename + ".replace").c_str());
	if (!output.is_open()) {
		std::cerr << "Failed to create output file" << std::endl;
		return ; }
	StrBuf << input.rdbuf();
	Buf = StrBuf.str();
	pos = Buf.find(s1);
	while (Buf[pos]) {
		rpSubstr(Buf, pos, s1, s2);
		pos = Buf.find(s1); }
	output.seekp(0);
	output << Buf;
	output.close();
	input.close();
	return ;
}

