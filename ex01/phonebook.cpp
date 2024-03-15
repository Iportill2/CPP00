/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iportill <iportill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:17:52 by iportill          #+#    #+#             */
/*   Updated: 2024/03/14 17:41:58 by iportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
Phonebook::Phonebook()
{
	std::cout << "Phonebook constructor create" << std::endl;
}
Phonebook::~Phonebook()
{
	std::cout << "Phonebook destructor create" << std::endl;
}

int Phonebook::setCount()
{
	return(_contac_count = 0);
}
int Phonebook::setPos()
{
	return(_contac_pos = 0);
}
std::string Phonebook::getCmd()
{
	return(_cmd);
}
void Phonebook::setCmd(std::string s)
{
	_cmd = s;
}


void padString(const std::string& str) 
{
    int len = str.length();
	if(len >= 10)
	{
		for(std::string::size_type i = 0; i < 9; ++i) 
    		std::cout << str[i];
		std::cout << ".";
	}
	else
	{
    	int totalSpaces = 10 - len;
    	std::string startSpaces(totalSpaces, ' ');
		std::cout << startSpaces + str ;
	}
}
int ft_isdigit_0_to_7(std::string s)
{
	if(s[0] >= '0' && s[0] <= '7')
		return(1);
	else
		return(0);
}
int ft_atoi(std::string s)
{
	int i=0;
	int result = 0;
	while(s[i])
	{
		result = (result *10)+(s[i] - '0');
		i++;
	}
	if(result >= 0 && result <= 9)
		return(result);
	else
		return(-1);
}
int Phonebook::ft_is_spaces(const char *s)
{
	int i = 0;

	while(s[i])
	{
		if(s[i] == ' ')
			return(-1);
		i++;
	}
	return(i);
}

void Phonebook::ft_search(Phonebook &date)
{
	int i = 0;
std::cout << "   Index  |First Name| Last Name| Nickname |" << std::endl;
std::cout << "----------|----------|----------|----------|" << std::endl;
while(i < date._contac_pos)
{
	std::cout << "         ";
	std::cout << i;
	std::cout << "|";
	padString(date._contact[i].getFirstName());
	std::cout << "|";
	padString(date._contact[i].getLastName());
	std::cout << "|";
	padString(date._contact[i].getNickname());
	std::cout << "|";
	std::cout << "" << std::endl;
	i++;
}
	std::cout << "Enter the index of the contact to display:";
	std::string index;
	std::getline(std::cin,index);
	int e =0;
	if(::ft_isdigit_0_to_7(index) == 1)
	{	
		if(::ft_isdigit_0_to_7(index) > date._contac_count)
		{
			std::cout << "The index is empty" << std::endl;
			return;
		}
		e=::ft_atoi(index);
		if( e >= 0)
		{
			std::cout << "Fist Name: ";
			std::cout << date._contact[e].getFirstName() << std::endl; 
			std::cout << "Last Name: ";
			std::cout << date._contact[e].getLastName() << std::endl; 
			std::cout << "Nickname: ";
			std::cout << date._contact[e].getNickname() << std::endl;
			std::cout << "Phone Number: ";
			std::cout << date._contact[e].getPhoneNumber() << std::endl;
			std::cout << "Darkest Secret: ";
			std::cout << date._contact[e].getDarkestSecret() << std::endl;
		}
		else
			std::cout << "You use invaid index " << std::endl;
	}
	else
		std::cout << "You may use number from 0 to 7" << std::endl;
	return;
}
int ft_atoi_string(std::string s)
{
	int i=0;
	int result = 0;
	while(s[i])
	{
		if(s[i] >= '0' && s[i] <= '9')
			result = (result *10)+(s[i] - '0');
		else
			return(-1);
		i++;
	}
	return(result);
}
void Phonebook::ft_add(Phonebook &date)
{
	Contac contact ;
	if(date._contac_count == 0)
		std::cout << "Phonebook is empty!" << std::endl;
	if (date._contac_count >= 8) 
	{
        std::cout << "Phonebook is full, resetting..." << std::endl;
        date._contac_count = 0;
    }

	std::string temp;
	/*
std::cout << "Please, introduce first name: " << std::endl;
std::getline(std::cin, temp);
	*/
	std::cout << "Please,intruduce first name: " << std::endl;
	std::getline (std::cin, temp);
	contact.setFirstName(temp);
	std::cout << "Please,intruduce last name: " << std::endl;
	std::getline (std::cin, temp);
	contact.setLastName(temp);
	//std::getline (std::cin,contact.getLastName());
	std::cout << "Please,intruduce nickname: " << std::endl;
	std::getline (std::cin, temp);
	contact.setNickName(temp);
	//std::getline (std::cin,contact.getNickname());
	std::cout << "Please,intruduce phone number: " << std::endl;
	std::getline (std::cin, temp);
	contact.setPhoneNbr(temp);
	//std::getline (std::cin,contact.getPhoneNumber());
	if(::ft_atoi_string(contact.getPhoneNumber()) == -1)
	{
		std::cout << "Only valid numbers in this parameter, please type ADD and try again" << std::endl;
		return;
	}
	std::cout << "Please,intruduce Darkest Secret: " << std::endl;
	std::getline (std::cin,temp);
	contact.setDarkestSecret(temp);
	if(contact.getFirstName().empty() || contact.getLastName().empty()  || contact.getNickname().empty() || \
	contact.getPhoneNumber().empty() || contact.getDarkestSecret().empty()  )
	{
			std::cout << "Empty filed try again, please" << std::endl;
		return;
	}
	
	if(date.ft_is_spaces(contact.getFirstName().c_str()) < 0|| date.ft_is_spaces(contact.getLastName().c_str()) < 0 || date.ft_is_spaces(contact.getNickname().c_str())< 0 || \
	date.ft_is_spaces(contact.getPhoneNumber().c_str()) < 0 || date.ft_is_spaces(contact.getDarkestSecret().c_str()) < 0 )
	{
			std::cout << "Field only contains spaces, try again please" << std::endl;
		return;
	}
	this->_contact[date._contac_count]= contact;
	if(date._contac_pos <= 7)
		date._contac_pos++;
	date._contac_count++;
	return;
}
int Phonebook::ft_exit()
{
	exit(1);
}