/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 15:15:25 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/23 15:15:25 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include <cstring>
#include <iostream>
#include <string>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

void			*serialize(void)
{
	char		*s = new char[18];
	char		alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char		numbers[] = "1234567890";
	int			i = 0;

	while (i < 8)
	{
		s[i] = alphabet[rand() % 52];
		i++;
	}
	s[i] = numbers[rand() % 10];
	i++;
	while (i < 17)
	{
		s[i] = alphabet[rand() % 52];
		i++;
	}
	s[i] = '\0';
	return (s);
}

Data			*deserialize(void *cerial)
{
	Data		*d = new Data();
	std::string	c(reinterpret_cast<char*>(cerial));

	std::cout << c << std::endl;
	d->s1 = c.substr(0, 8);
	d->n = std::stoi(c.substr(8, 1));
	d->s2 = c.substr(9, 8);
	return (d);
}

int				main(void)
{
	void		*serialized;
	Data		*data;

	srand(time(0));
	serialized = serialize();
	data = deserialize(serialized);
	std::cout << "Serialized: " << reinterpret_cast<char*>(serialized) << std::endl;
	std::cout << "Deserialized s1: " << data->s1 << std::endl;
	std::cout << "Deserialized n: " << data->n << std::endl;
	std::cout << "Deserialized s2: " << data->s2 << std::endl;
	return (0);
}
