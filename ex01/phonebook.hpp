/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iportill <iportill@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:17:58 by iportill          #+#    #+#             */
/*   Updated: 2024/03/14 16:18:01 by iportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "contac.hpp"
# include <iostream>
# include <cstdlib>
# include <cstdio>


class Phonebook
{
public:
	Phonebook();
	~Phonebook();
	void 		ft_add(Phonebook &date);
	void 		ft_search(Phonebook &date);
	int 		ft_exit();
	int 		ft_atoi();
	int 		ft_atoi_string();
	int 		ft_isdigit_0_to_7();
	int 		ft_is_spaces(const char *s);
	int 		setCount();
	int 		setPos();
	std::string getCmd();
	void 		setCmd(std::string s);
private:
	std::string _cmd;
	int _contac_pos;
	int _contac_count;
	Contac	_contact[8];

};

#endif