/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 21:35:47 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/16 21:35:48 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
# include <fstream>
# include <ctime>

class Logger
{
	private:
		std::ofstream _writeFile;
		const std::string _fileName;
		void _logToConsole(std::string);
		void _logToFile(std::string);
		std::string _makeLogEntry(std::string);

	public:
		Logger(void);
		~Logger(void);

		void log(std::string const &, std::string const &);
};

#endif
