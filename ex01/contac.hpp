/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contac.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iportill <iportill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:17:27 by iportill          #+#    #+#             */
/*   Updated: 2024/03/14 16:17:30 by iportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTAC_H
# define CONTAC_H
# include <iostream>
# include <cstdlib>
# include <cstdio>

class Contac
{
public:
	Contac();
	~Contac();
	std::string getFirstName();
	std::string getLastName();
	std::string getNickname();
	std::string getPhoneNumber();
	std::string getDarkestSecret();
	void 		setFirstName(const std::string &firstName);
	void 		setLastName(const std::string &lastName);
	void 		setNickName(const std::string &nickName);
	void 		setPhoneNbr(const std::string &phonenumber); 
	void 		setDarkestSecret(const std::string &darkestsecret);
private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_nbr;
	std::string _darkest_secret;

};

#endif

