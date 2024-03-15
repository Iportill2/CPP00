/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contac.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iportill <iportill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:17:20 by iportill          #+#    #+#             */
/*   Updated: 2024/03/14 16:17:23 by iportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contac.hpp"

Contac::Contac()
{
	std::cout << "Contac constructor create" << std::endl;
}


Contac::~Contac()
{
	std::cout << "Contac destructor create" << std::endl;
}
std::string Contac::getFirstName()
{
    return (_first_name);
}

std::string Contac::getLastName()
{ 
    return (_last_name); 
}

std::string Contac::getNickname()
{
    return (_nickname);
}

std::string Contac::getPhoneNumber()
{
    return (_phone_nbr);
}

std::string Contac::getDarkestSecret()
{
    return (_darkest_secret);
}
void Contac::setFirstName(const std::string &firstName) 
{
    this->_first_name = firstName;
}
void Contac::setLastName(const std::string &lastName) 
{
    this->_last_name = lastName;
}
void Contac::setNickName(const std::string &nickName) 
{
    this->_nickname = nickName;
}
void Contac::setPhoneNbr(const std::string &phonenumber) 
{
    this->_phone_nbr = phonenumber;
}
void Contac::setDarkestSecret(const std::string &darkestsecret) 
{
    this->_darkest_secret = darkestsecret;
}