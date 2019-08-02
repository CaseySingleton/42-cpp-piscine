/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 19:26:11 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/25 19:26:12 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <thread>
#include <unistd.h>
#include <sys/types.h>
#include <sys/sysctl.h>

int				main(void)
{
	unsigned	numberOfCores;

	numberOfCores = std::thread::hardware_concurrency();
	std::cout << "Number of cores on this machine: " << numberOfCores << std::endl;
	char buffer[100] = {0};
    size_t bufLen = 100;

	sysctlbyname("machdep.cpu.brand_string", &buffer, &bufLen, NULL, 0);
	std::cout << buffer << std::endl;
	return (0);
}
