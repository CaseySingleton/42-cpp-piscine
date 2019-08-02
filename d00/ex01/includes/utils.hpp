/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 20:24:22 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/15 20:24:23 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

#include <iostream>

bool		stringIsAlpha(std::string str);
bool		stringIsDigit(std::string str);
std::string	getInputFromUserAsString(std::string displayMessage);

#endif
