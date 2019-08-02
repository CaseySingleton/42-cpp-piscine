/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 12:44:03 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/17 12:44:04 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <csignal>
#include <string>
#include <unistd.h>

#define BUFF_SIZE 1024

void		handlePipedInput(void)
{
	std::string pipeInput;

	std::cin >> pipeInput;
	std::cout << pipeInput << std::endl;
}

void		cato9tailsLoop(void)
{
	std::string input;

	while (std::getline(std::cin, input))
	{
		std::cout << input << std::endl;
	}
}

void		printFile(char *fileName)
{
	std::ifstream f(fileName);

	if (f.is_open())
	{
		std::cout << f.rdbuf() << std::endl;
	}
	else
	{
		std::cout << "cato9tails: " << fileName << ": No such file or directory" << std::endl;
	}
}

int			main(int argc, char *argv[])
{
	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			printFile(argv[i]);
		}
	}
	else if (!isatty(0))
		handlePipedInput();
	else
		cato9tailsLoop();
	return (0);
}
