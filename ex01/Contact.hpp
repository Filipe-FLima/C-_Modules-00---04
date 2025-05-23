/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipe <filipe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 09:46:49 by flima             #+#    #+#             */
/*   Updated: 2025/05/23 20:51:29 by filipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>

class	Contact
{
	private:
		std::string	name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	
	public:
		Contact(void);
		// void	set_name(std::string detail);
		// void	set_last_name(std::string detail);
		// void	set_nickname(std::string detail);
		// void	set_phone_number(std::string detail);
		// void	set_darkest_secret(std::string detail);
		void		add_new_details();
		void		print_saved_contacts(int index);
		std::string	format_field(const std::string& field);
		void		printout_contact_details(void);
		void		add_phone_number();
};

#endif