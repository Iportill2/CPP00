/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iportill <iportill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:17:20 by iportill          #+#    #+#             */
/*   Updated: 2024/03/14 16:17:23 by iportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
	std::cout << "Contact constructor created" << std::endl;
}

Contact::~Contact()
{
	std::cout << "Contact destructor called" << std::endl;
}

std::string Contact::getFirstName()
{
    return (_first_name);
}

std::string Contact::getLastName()
{ 
    return (_last_name); 
}

std::string Contact::getNickname()
{
    return (_nickname);
}

std::string Contact::getPhoneNumber()
{
    return (_phone_nbr);
}

std::string Contact::getDarkestSecret()
{
    return (_darkest_secret);
}

void Contact::setFirstName(const std::string &firstName) 
{
    this->_first_name = firstName;
}

void Contact::setLastName(const std::string &lastName) 
{
    this->_last_name = lastName;
}

void Contact::setNickName(const std::string &nickName) 
{
    this->_nickname = nickName;
}

void Contact::setPhoneNbr(const std::string &phonenumber) 
{
    this->_phone_nbr = phonenumber;
}

void Contact::setDarkestSecret(const std::string &darkestsecret) 
{
    this->_darkest_secret = darkestsecret;
}
