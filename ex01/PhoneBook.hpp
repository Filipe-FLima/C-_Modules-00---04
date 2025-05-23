/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filipe <filipe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 09:31:27 by flima             #+#    #+#             */
/*   Updated: 2025/05/23 21:24:13 by filipe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip> //formata output
#include "Contact.hpp"

# define MaxContacts 2

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