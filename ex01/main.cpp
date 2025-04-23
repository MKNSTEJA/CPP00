/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:42:29 by kmummadi          #+#    #+#             */
/*   Updated: 2025/04/23 01:14:17 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"
# include "contacts.hpp"
# include "utils.hpp"
#include <cstdlib>

int main (void)
{
  Phonebook phonebook;
  std::string input;

  std::system("clear");
  while(1)
  {
    input = ask("\nEnter ADD or SEARCH or EXIT\nInput: ");
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
      std::cout << "Invalid input. Please try again\n";
  }
  return (0);
}
