/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wbarendr <wbarendr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 15:03:21 by wbarendr      #+#    #+#                 */
/*   Updated: 2020/07/27 20:28:26 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "contact.class.hpp"

void    Contact::add_data(void)
{
	std::cout << "please write contact's first name> "; std::getline(std::cin, data[0]);
	std::cout << "last name> "; std::getline(std::cin, data[1]);
	std::cout << "nickname> "; std::getline(std::cin, data[2]);
	std::cout << "login> "; std::getline(std::cin, data[3]);
	std::cout << "postal address> "; std::getline(std::cin, data[4]);
	std::cout << "email address> "; std::getline(std::cin, data[5]);
	std::cout << "phone number> "; std::getline(std::cin, data[6]);
	std::cout << "birthday> "; std::getline(std::cin, data[7]);
	std::cout << "favorite meal> "; std::getline(std::cin, data[8]);
	std::cout << "underwear color> "; std::getline(std::cin, data[9]);
	std::cout << "Darkest secret> "; std::getline(std::cin, data[10]);
}

void	Contact::print_this(void)
{	
	std::cout << "First name: " << data[0] << "\n";
	std::cout << "Last name: " << data[1] << "\n";
	std::cout << "Nickname: " << data[2] << "\n";
	std::cout << "Login: " << data[3] << "\n";
	std::cout << "Postal Address: " << data[4] << "\n";
	std::cout << "Email Address: " << data[5] << "\n";
	std::cout << "Phone number: " << data[6] << "\n";
	std::cout << "Birthday: " << data[7] << "\n";
	std::cout << "Favorite Meal: " << data[8] << "\n";
	std::cout << "Underwear color: " << data[9] << "\n";
	std::cout << "Darkest Secret: " << data[10] << "\n";
}

void	Contact::table(void)
{
	for (int i = 0; i < 3; ++i)
	{
		if (data[i].size() < 11){
			for (int k = 0; data[i].size() + k < 10; ++k)
				std::cout << " ";
			std::cout << data[i];
		}
		else {
			for (int k = 0; k < 9; ++k)
				std::cout << data[i][k];				
			std::cout << ".";
		}
		if (i < 2)
			std::cout << "|";
	}
	std::cout << "\n";
}


int     main(void)
{
	Contact new_contact[8];
	int amount = 0;
	int index;
	std::string cmd;
	while (1)
	{
		std::cout << "ADD, SEARCH or EXIT?> "; std::getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			if (amount == 8)
				std::cout << "Contact list is full..\n";
			else
			{
		    	new_contact[amount].add_data();
				++amount;
			}
		}
		if (cmd == "SEARCH")
		{
			if (amount == 0)
				std::cout << "phonebook is empty... you have no friends...\n genant...\n"; 
			else {
				std::cout << "     index|" << "first name|"<< " last name|" << "  nickname\n";				
				for (int tab = 0; tab < amount; ++tab){
					std::cout << "         " << tab + 1 << "|";
					new_contact[tab].table();
				}
				std::cout << "Who is your best friend? "; std::cin >> index;
				std::cin.ignore();
				if (index - 1 >= 0 && index - 1 < amount)
					new_contact[index - 1].print_this();
				else
					std::cout << "definetly not your best friend!\n";	
			}
		}
		if (cmd ==  "EXIT")
			exit(0);
	}
	return (0); 
}