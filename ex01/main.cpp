/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:42:29 by kmummadi          #+#    #+#             */
/*   Updated: 2025/04/15 09:09:20 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"
# include "contacts.hpp"

int main (void)
{
  Phonebook phonebook;
  std::string input;

  while(1)
  {
    std::cout << "Enter ADD or SEARCH or EXIT" << std::endl;
    std::cout << "Input: ";
    std::cin >> input;
    if (input == "ADD")
      phonebook.add_contact();
    else if (input == "SEARCH")
      phonebook.search_contact();
    else if(input == "EXIT")
    {
      std::cout << "Exiting..." << std::endl;
      break;
    }
    else 
      std::cout << "Invalid input. Please try again";
  }
  return (0);
}
