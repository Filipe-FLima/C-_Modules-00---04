/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:06:32 by flima             #+#    #+#             */
/*   Updated: 2025/05/20 11:58:32 by flima            ###   ########.fr       */
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
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			add_new_contact() //Phone class
		}
		else if(command == "SEARCH")
		{
			look_up_contact()
		}
		else if (command == "EXIT")
			break;
		else
			continue;
	}
	//destructor PhoneBook
	exit (0);
}