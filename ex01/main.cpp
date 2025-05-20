/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flima <flima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:06:32 by flima             #+#    #+#             */
/*   Updated: 2025/05/20 11:53:34 by flima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook 	phonebook;
	std::string	command;
	
	while(true)
	{
		std::getline(std::cin, command);
		if (command == "ADD")
		{
			
		}
		else if(command == "SEARCH")
		{
			
		}
		else if (command == "EXIT")
			break;
		else
			continue;
	}
	
}