/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmalyana <gmalyana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 21:08:48 by gmalyana          #+#    #+#             */
/*   Updated: 2025/02/10 21:15:39 by gmalyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void Myclass::replace(std::string filename, std::string s1, std::string s2)
{
		std::string line;  
		std::string content;
		size_t pos = 0;
		
		// open the file
		std::ifstream inputFile(filename);
		if (!inputFile.is_open())
			std::cerr << "Error: Could not open file '" << filename << "'" << std::endl;
		
		while (std::getline(inputFile, line)){
			content += line + "\n";
		}
		inputFile.close();
		// looking for s1 in hte string content;
		while ((pos = content.find(s1, pos)) != std::string::npos)
		{
			content.erase(pos, s1.length());
			content.insert(pos, s2);
			pos += s2.length();
		}
		// writing the modification content to the output file
		std::ofstream outputFile((filename + "_replace").c_str());
		if (!outputFile.is_open()){
			std::cout << "Could not create output file" << filename + "_replace" << std::endl;
		}
		outputFile << content;
		outputFile.close();
}