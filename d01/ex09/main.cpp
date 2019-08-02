/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 21:35:52 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/16 21:35:52 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "Logger.hpp"

int			main(void)
{
	Logger logs;

	logs.log("logToConsole", "Hello, Console!");
	logs.log("logToFile", "Hello, File!");
	return (0);
}
