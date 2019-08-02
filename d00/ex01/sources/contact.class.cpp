/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csinglet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 20:23:58 by csinglet          #+#    #+#             */
/*   Updated: 2019/07/15 20:23:59 by csinglet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void)
{
	// std::cout << "Contact created!\n" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	// std::cout << "Contact destroyed" << std::endl;
	return ;
}

// Setters

void Contact::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
	this->_lastName = lastName;
}

void Contact::setNickname(std::string nickName)
{
	this->_nickName = nickName;
}

void Contact::setLogin(std::string login)
{
	this->_login = login;
}

void Contact::setPostalAddress(std::string postalAddress)
{
	this->_postalAddress = postalAddress;
}

void Contact::setEmailAddress(std::string emailAddress)
{
	this->_emailAddress = emailAddress;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}

void Contact::setBirthday(std::string birthday)
{
	this->_birthday = birthday;
}

void Contact::setFavoriteMeal(std::string favoriteMeal)
{
	this->_favoriteMeal = favoriteMeal;
}

void Contact::setUnderwearColor(std::string underwearColor)
{
	this->_underwearColor = underwearColor;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}

// Getters

std::string Contact::getFirstName(void) const
{
	return (this->_firstName);
}

std::string Contact::getLastName(void) const
{
	return (this->_lastName);
}

std::string Contact::getNickname(void) const
{
	return (this->_nickName);
}

std::string Contact::getLogin(void) const
{
	return (this->_login);
}

std::string Contact::getPostalAddress(void) const
{
	return (this->_postalAddress);
}

std::string Contact::getEmailAddress(void) const
{
	return (this->_emailAddress);
}

std::string Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

std::string Contact::getBirthday(void) const
{
	return (this->_birthday);
}

std::string Contact::getFavoriteMeal(void) const
{
	return (this->_favoriteMeal);
}

std::string Contact::getUnderwearColor(void) const
{
	return (this->_underwearColor);
}

std::string Contact::getDarkestSecret(void) const
{
	return (this->_darkestSecret);
}

void Contact::displayContactInfo(void) const
{
	std::cout << _firstName << std::endl;
	std::cout << _lastName << std::endl;
	std::cout << _nickName << std::endl;
	std::cout << _login << std::endl;
	std::cout << _postalAddress << std::endl;
	std::cout << _emailAddress << std::endl;
	std::cout << _phoneNumber << std::endl;
	std::cout << _birthday << std::endl;
	std::cout << _favoriteMeal << std::endl;
	std::cout << _underwearColor << std::endl;
	std::cout << _darkestSecret << std::endl;
}
