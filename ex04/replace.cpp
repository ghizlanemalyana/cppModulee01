/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 21:16:29 by gmalyana          #+#    #+#             */
/*   Updated: 2025/03/12 21:16:48 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

void Replace::replace(std::string filename, std::string s1, std::string s2)
{
	std::string content;
	size_t pos = 0;

	if (s1.empty())
	{
		std::cout << "Empty string" << std::endl;
		return;
	}
	std::ifstream inputFile(filename);
	if (!inputFile.is_open()){
		std::cout << "Could not open file : " << filename << std::endl;
		return;
	}
	if (std::getline(inputFile, content, '\0')){
		while ((pos = content.find(s1, pos)) != std::string::npos)
		{
			content.erase(pos, s1.length());
			content.insert(pos, s2);
			pos += s2.length();
		}
		std::ofstream outputFile((filename + "_replace").c_str());
		if (!outputFile.is_open()){
			std::cout << "Could not create output file" << filename + "_replace" << std::endl;
		}
		else {
			outputFile << content;
		}
		outputFile.close();
	}
	inputFile.close();
}