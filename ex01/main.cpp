/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iportill <iportill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:17:34 by iportill          #+#    #+#             */
/*   Updated: 2024/03/14 16:17:36 by iportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

int main()
{
	Phonebook instanceBook;
	instanceBook.setCount();
	instanceBook.setPos();
	instanceBook.getCmd();
/* 	instanceBook.contac_count = 0;
	instanceBook.contac_pos = 0; */
	while(1)
	{
		std::cout << "Please, choose your action: Type ADD SEARCH or EXIT " << std::endl;
  		std::string str;
		std::getline (std::cin,str);
		instanceBook.setCmd(str);
		if (std::cin.eof()) //if eof/ctrl+D terminate
		{
			std::cout << "Caution you push Ctrl+D = eof" << std::endl;
			return (0);
		}
		else
		{
			if( instanceBook.getCmd() == "ADD")
				instanceBook.ft_add(instanceBook);
			else if(instanceBook.getCmd() == "SEARCH")
				instanceBook.ft_search(instanceBook);
			else if(instanceBook.getCmd() == "EXIT")
				instanceBook.ft_exit();
			else 
        		std::cout << "Invalid command" << std::endl;
		}
	}
	return(0);
}