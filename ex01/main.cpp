/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:06:32 by flima             #+#    #+#             */
/*   Updated: 2025/05/21 12:49:16 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook 	phonebook;
	std::string	command;
	
	//constructor PhoneBook set 
	while(true)
	{
		std::cout << "📞 ";
		std::getline(std::cin, command);
		if (command == "ADD")
			phonebook.add_new_contact();
		else if(command == "SEARCH")
			phonebook.look_up_contacts();
		else if (command == "EXIT")
			break;
		else
			continue;
	}
	//destructor PhoneBook
	return (0);
}