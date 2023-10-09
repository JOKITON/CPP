/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StdReplace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 11:27:28 by jokin             #+#    #+#             */
/*   Updated: 2023/10/09 16:55:03 by jaizpuru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StdReplace.hpp"

void	clearTerminal() {
	std::cout << "\033[2J\033[1;1H";
}

void	rpSubstr(std::string& buf, size_t pos, const std::string s1, const std::string& s2) {
	std::string	temp;

	temp = buf.substr(0, pos) + s2 + buf.substr(pos + s1.length());
	buf = temp; }

void	rpStringInFile(const std::string& filename, const std::string& s1, const std::string& s2) {
	std::ifstream		input(filename.c_str());
	if (!input.is_open() || !filename.compare(".") || !filename.compare("..")) { // Error handling
		clearTerminal();
		if (!filename.compare(".") || !filename.compare(".."))
			std::cerr << "error: non-valid directories" << std::endl;
		else
			std::cerr << "error: file not found OR not-adequate file permissions" << std::endl;
		return ; }
		
	std::stringstream	StrBuf;
	std::string		Buf;
	size_t			pos;
	pos = 0;
	StrBuf << input.rdbuf(); // Copy content to StrBuf from file
	Buf = StrBuf.str();
	pos = Buf.find(s1);
	input.close();

	while (true) {
		pos = Buf.find(s1, pos); // Finds the next instance of s1 starting from pos
		if (pos == std::string::npos) {
			break; // If no s1 is found, break.
		}
		rpSubstr(Buf, pos, s1, s2); // Substitutes s2 instance with s1.
		pos += s2.length(); // Position is increased so more instances can be found.
	}

	std::ofstream		output((filename + ".replace").c_str());
	if (!output.is_open()) { // Error handling
		std::cerr << "Failed to create output file" << std::endl;
		return ; }
	output.seekp(0); // Start from pos 0
	output << Buf;
	output.close();
	return ;
}

