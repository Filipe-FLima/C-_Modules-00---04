/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 09:31:27 by flima             #+#    #+#             */
/*   Updated: 2025/05/21 13:45:51 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <string>
#include <iostream>
#include <sstream> 
#include <iomanip> //formata output
#include "Contact.hpp"

# define MaxContacts 1

class PhoneBook
{
	private:
		Contact contacts[MaxContacts];
		int		index;
		int		saved_contacts;
	
	public:
		//creat constructor and destructor
		PhoneBook(void);
		void	add_new_contact(void);
		void	look_up_contacts(void);
		void	find_contact(void);
		
};


#endif