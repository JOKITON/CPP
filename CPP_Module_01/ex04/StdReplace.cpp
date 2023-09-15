/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StdReplace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaizpuru <jaizpuru@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 11:27:28 by jokin             #+#    #+#             */
/*   Updated: 2023/09/15 19:03:21 by jaizpuru         ###   ########.fr       */
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

/* std::ifstream	getFile(const std::string filename) {
	std::ifstream		input(filename.c_str());
	if (!input.is_open()) {
		clearTerminal();
		std::cerr << "File not found" << std::endl;
		return ""; }
	else
		return input;

} //*/
// Cannot work without a structure, std::ifstream limits the way return values are handled.


void	rpStringInFile(const std::string& filename, const std::string& s1, const std::string& s2) {
	std::ifstream		input(filename.c_str());
	if (!input.is_open()) {
		clearTerminal();
		std::cerr << "File not found" << std::endl;
		return ; }
		
	std::stringstream	StrBuf;
	std::string		Buf;
	size_t			pos;
	pos = 0;
	StrBuf << input.rdbuf();
	Buf = StrBuf.str();
	pos = Buf.find(s1);
	input.close();
	while (true) {
		pos = Buf.find(s1, pos); // Busca la siguiente instancia de s1 a partir de pos
		if (pos == std::string::npos) {
			break; // Si no se encuentra más s1, sal del bucle
		}
		rpSubstr(Buf, pos, s1, s2); // Reemplaza esta instancia de s1 por s2
		pos += s2.length(); // Avanza pos más allá de s2 para evitar bucles infinitos
	}

	std::ofstream		output((filename + ".replace").c_str());
	if (!output.is_open()) {
		std::cerr << "Failed to create output file" << std::endl;
		return ; }
	output.seekp(0);
	output << Buf;
	output.close();
	return ;
}

