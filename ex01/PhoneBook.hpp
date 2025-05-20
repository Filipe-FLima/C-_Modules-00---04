/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 09:31:27 by flima             #+#    #+#             */
/*   Updated: 2025/05/20 12:09:02 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <string>
#include <iostream>
#include <iomanip> //formata output
#include "Contact.hpp"

# define MaxContacts 8

class PhoneBook
{
	private:
		Contact contacts[MaxContacts];
		int		index;
		int		oldest_contact;
	
	public:
		//creat constructor and destructor
		void	add_new_contact(void);
		

};


#endif