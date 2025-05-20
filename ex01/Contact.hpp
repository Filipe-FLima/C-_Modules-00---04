/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 09:46:49 by flima             #+#    #+#             */
/*   Updated: 2025/05/20 12:31:48 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include "PhoneBook.hpp"

class	Contact
{
	private:
		std::string	name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	
	public:
		// void	set_name(std::string detail);
		// void	set_last_name(std::string detail);
		// void	set_nickname(std::string detail);
		// void	set_phone_number(std::string detail);
		// void	set_darkest_secret(std::string detail);
		void add_new_details(void);
};

#endif