/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 20:15:35 by kmummadi          #+#    #+#             */
/*   Updated: 2025/04/15 09:00:30 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"
# include <cstring>
#include <ostream>
#include <string>

std::string shorten_string(std::string str);
void print_columns(void);

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

// Add contacts
void Phonebook::add_contact(void)
{
  int i = this->p_index;
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
  if(this->p_index < 7)
    this->p_index+=1;
  else
  {
    this->p_all_filled = 1;
    this->p_index = 0;
  }
}

// Search contacts
void Phonebook::search_contact(void)
{
  std::string input;
  int index;

  while(1)
  {
    print_contacts();
    std::cout << "Which one to be displayed? Index: ";
    std::cin >> input;
    if (input == "EXIT")
      break;
    index = std::stoi(input);
    if(p_index < index)
    {
      std::cout << "Invalid index. Please enter the right index number." << std::endl;
      continue;
    }
    else if(index < p_index)
    {
      print_columns();
      std::cout << "| " << index << ". ";
      std::cout << " | " << shorten_string(this->p_contact[index].get_first_name());
      std::cout << " | " << shorten_string(this->p_contact[index].get_last_name());
      std::cout << " | " << shorten_string(this->p_contact[index].get_nickname());
      std::cout << std::endl;
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
    std::cout << "|" << i << ".        ";
    std::cout << "|" << shorten_string(this->p_contact[i].get_first_name());
    std::cout << "|" << shorten_string(this->p_contact[i].get_last_name());
    std::cout << "|" << shorten_string(this->p_contact[i].get_nickname()) << "|";
    // Waiting for my villain arc to uncomment this:
    // std::cout << " |" << this->p_contact[i].get_darkest_secret() << " |";
    std::cout << std::endl;
  }

  return;
}

// Helper function to truncate strings.
std::string shorten_string(std::string str)
{
  std::string result; 
  int len;

  len = str.length();
  if(len < 10)
  {
    result = str;
    len = 10 - len;
    while((len--) > 0)
      result = result + " ";
  }
  else
    result = str.substr(0, 9) + ".";
  return (result);
}

// Helper function to print columns
void print_columns(void)
{ 
  std::cout << "*********************************************";
  std::cout << std::endl;
  std::cout << "|  Index   |";
  std::cout << "First name|";
  std::cout << "Last name |";
  std::cout << " Nickname |";
  std::cout << std::endl;
  std::cout << "*********************************************";
  std::cout << std::endl;

  return;
}
