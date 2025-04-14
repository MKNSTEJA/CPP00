/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 20:15:35 by kmummadi          #+#    #+#             */
/*   Updated: 2025/04/14 20:18:05 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"

// Constructor
Phonebook::Phonebook()
{
  std::cout << "<--- Phonebook class created --->" << std::endl;
  this->p_index = 0;
  this->p_all_filled = 0;
}

// Destructor
Phonebook::~Phonebook()
{
  std::cout << "<--- Phonebook class destroyed --->" << std::endl;
}

void Phonebook::add_contact(void)
{
  int i = p_index;
  std::string first_name, last_name, nickname, phonenumber, darkest_secret;

  // Get info from user
  std::cout << "First name: ";
  std::cin >> first_name;
  
  std::cout << "Last name: ";
  std::cin >> last_name;

  std::cout << "Nickname: ";
  std::cin >> nickname;

  std::cout << "Phone number: ";
  std::cin >> phonenumber;

  std::cout << "Darkest secret: ";
  std::cin >> darkest_secret;

  // Assign info to the respective contact
  p_contact[i].save_first_name(first_name);
  p_contact[i].save_last_name(last_name);
  p_contact[i].save_nickname(nickname);
  p_contact[i].save_phonenumber(phonenumber);
  p_contact[i].save_darkest_secret(darkest_secret);

  // Increment index
  if(p_index < 8)
    this->p_index++;
  else
  {
    this->p_all_filled = 1;
    this->p_index = 0;
  }
}

void Phonebook::print_contacts(void)
{
  int limit;
  
  // Checks how many elements to be printed based on how many contacts are registered
  if(this->p_all_filled)
    limit = 8;
  else
    limit = this->p_index;

  for(int i = 0; i < limit; i++)
  {
    std::cout << "| " << i << ". ";
    std::cout << " | " << this->p_contact[i].get_first_name();
    std::cout << " | " << this->p_contact[i].get_last_name();
    std::cout << " | " << this->p_contact[i].get_nickname();
    std::cout << " | " << this->p_contact[i].get_phonenumber();
    // Waiting for my villain arc to uncomment this:
    // std::cout << " |" << this->p_contact[i].get_darkest_secret() << " |";
    std::cout << std::endl;
  }
}
