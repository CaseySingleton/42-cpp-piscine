/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 12:58:55 by csinglet          #+#    #+#             */
/*   Updated: 2019/05/09 12:58:56 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>

# include <list>
# include <vector>
# include <iterator>
# include <algorithm>
# include <exception>

template <typename T>
int easyfind(T list, int find)
{
	typename T::iterator it;

	it = std::find(list.begin(), list.end(), find);
	if (it != list.end())
	{
		return (std::distance(list.begin(), it));
	}
	throw std::exception();
}

#endif
