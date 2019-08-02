/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 21:35:44 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/16 21:35:44 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(void) : _fileName("logs.txt")
{
	this->_writeFile.open(this->_fileName, std::ios_base::app);

	if (!this->_writeFile)
		std::cout << "Could not create file: '" << this->_fileName << "' does not exist" << std::endl;
}

Logger::~Logger(void)
{
	this->_writeFile.close();
}

void Logger::log(std::string const & dest, std::string const & message)
{
	std::string loggerNames[] = {"logToConsole", "logToFile"};
	void (Logger::*memberFunctions[])(std::string) = {&Logger::_logToConsole, &Logger::_logToFile};

	for (int i = 0; i < 2; i++)
	{
		if (dest == loggerNames[i])
		{
			(this->*memberFunctions[i])(message);
		}
	}
}

void Logger::_logToConsole(std::string message)
{
	std::cout << this->_makeLogEntry(message) << std::endl;
}

void Logger::_logToFile(std::string message)
{
	this->_writeFile << this->_makeLogEntry(message) << std::endl;
}

std::string Logger::_makeLogEntry(std::string message)
{
	time_t rawtime;
  	struct tm * timeinfo;
  	char buffer[80];

  	time (&rawtime);
  	timeinfo = localtime(&rawtime);

  	strftime(buffer, sizeof(buffer), "%d-%m-%Y %H:%M:%S", timeinfo);
  	std::string curTime(buffer);
	return ("[Stardate 72794.5 " + curTime + "] " + message);
}
