/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 21:00:01 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/16 21:00:02 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void		failure(std::string message)
{
	std::cout << message << std::endl;
	exit (-1);
}

int			main(int argc, char *argv[])
{
	std::string find;
	std::string replace;
	std::string buffer;
	std::string inputFile;
	std::string outputFile;
	std::string temp;
	size_t pos;

	if (argc == 4)
	{
		inputFile = argv[1];
		outputFile = inputFile + ".replace";
		find = argv[2];
		replace = argv[3];
		std::ifstream readFile(inputFile);
		if (readFile.fail())
			failure("Failed to open file \'" + inputFile + "\'");
		std::ofstream writeFile(outputFile);
		if (writeFile.fail())
			failure("Failed to make file \'" + outputFile + "\'");
		while (std::getline(readFile, temp))
			buffer += temp + "\n";
		while ((pos = buffer.find(find)) != std::string::npos)
			buffer.replace(pos, find.length(), replace);
		writeFile << buffer;
		readFile.close();
		writeFile.close();
	}
	else
		std::cout << "Usage: ./replace <fileName> <find> <replace>" << std::endl;
	return (0);
}
