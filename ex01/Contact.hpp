/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 09:46:49 by flima             #+#    #+#             */
/*   Updated: 2025/05/24 13:52:25 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>
#include <iomanip>

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

		void		add_new_details();
		void		add_phone_number();
		void		print_saved_contacts(int index);
		void		printout_contact_details(void);
		std::string	format_field(const std::string& field);
};

#endif