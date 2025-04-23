/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 20:15:35 by kmummadi          #+#    #+#             */
/*   Updated: 2025/04/23 01:59:11 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"
# include <cstring>
# include <ostream>
# include <string>
# include "utils.hpp"

// Constructor
Phonebook::Phonebook()
{
  // std::cout << "<--- Phonebook class created --->" << std::endl;
  this->p_index = 0;
  this->p_all_filled = 0;
}

// Destructor
Phonebook::~Phonebook()
{
  // std::cout << "<--- Phonebook class destroyed --->" << std::endl;
}

// Add contacts
void Phonebook::add_contact(void)
{
  int i = this->p_index;
  std::string first_name, last_name, nickname, phonenumber, darkest_secret;

  // Get info from user
  first_name = ask(YELLOW + "\nFirst name: " + RESET);
  last_name = ask(YELLOW + "Last name: " + RESET);
  nickname = ask(YELLOW + "Nickname: " + RESET);
  phonenumber = check_phonenumber();
  darkest_secret = ask(YELLOW + "Darkest secret: " + RESET);

  // Assign info to the respective contact
  p_contact[i].save_first_name(first_name);
  p_contact[i].save_last_name(last_name);
  p_contact[i].save_nickname(nickname);
  p_contact[i].save_phonenumber(phonenumber);
  p_contact[i].save_darkest_secret(darkest_secret);

  // Increment index
  if(this->p_index < 7)
    this->p_index+=1;
  else
  {
    this->p_all_filled = 1;
    this->p_index = 0;
  }
  std::system("clear");
  colorprint("Cookiess... (*coughs).. ahem sorry I mean Contact saved!", GREEN);
}

// Search contacts
void Phonebook::search_contact(void)
{
  std::string input;
  int index;

  if(p_index == 0)
  {
    std::cout << "\n0 Contacts saved. Please add contacts first!\n";
    return;
  }
  while(1)
  {
    print_contacts();
    input = ask("\nWhich one to be displayed? (\"q\" to exit)\nIndex: ");
    if (input == "q")
    {
      std::system("clear");
      break;
    }
    if(!(input.length() == 1 && std::strchr("12345678", input[0])) || p_index < std::stoi(input))
    {
      std::system("clear");
      colorprint("Invalid index. Please enter right index number.", ORANGE);
      continue;
    }
    index = std::stoi(input) - 1;
    if(index < p_index)
    {
      std::system("clear");
      colorprint("First Name: ", YELLOW);
      std::cout << this->p_contact[index].get_first_name() << "\n";
      colorprint("Last Name: ", YELLOW);
      std::cout << this->p_contact[index].get_last_name() << "\n";
      colorprint("Nickname: ", YELLOW);
      std::cout << this->p_contact[index].get_nickname() << "\n";
      colorprint("Phone number: ", YELLOW);
      std::cout << this->p_contact[index].get_phonenumber() << "\n";
      colorprint("Darkest secret: ", YELLOW);
      std::cout << this->p_contact[index].get_darkest_secret() << "\n";
      break;
    }
  }

  return;
}

// Helper function to print contacts
void Phonebook::print_contacts(void)
{
  int limit;
  
  // Checks how many elements to be printed based on how many contacts are registered
  if(this->p_all_filled)
    limit = 8;
  else
    limit = this->p_index;
  print_columns();
  for(int i = 0; i < limit; i++)
  {
    std::cout << "|        " << i+1 << ".";
    std::cout << "|" << shorten_string(this->p_contact[i].get_first_name());
    std::cout << "|" << shorten_string(this->p_contact[i].get_last_name());
    std::cout << "|" << shorten_string(this->p_contact[i].get_nickname()) << "|";
    std::cout << "\n---------------------------------------------";
    std::cout << std::endl;
  }

  return;
}

