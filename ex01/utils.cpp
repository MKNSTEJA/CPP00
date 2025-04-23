/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 22:47:31 by kmummadi          #+#    #+#             */
/*   Updated: 2025/04/23 01:33:16 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "utils.hpp"
# include <cctype>

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
      result = " " + result;
  }
  else
    result = str.substr(0, 9) + ".";
  return (result);
}

// Helper function to print columns
void print_columns(void)
{ 
  std::cout << "\n";
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

// Function for getting input
std::string ask(std::string prompt)
{
  std::string input;
  
  std::cout << prompt;
  while(true)
  {
    if(!std::getline(std::cin, input))
    {
      std::cout << "Input error detected. Exiting..." << std::endl;
      std::cin.clear();
      exit(-1);
    }
    if(input.empty())
    {
      std::cout << "Fields cannot be empty. Please give a valid input" << std::endl;
      std::cout << prompt;
      continue;
    }
    else
      break;
  }

  return (input);
}

// Check if the phonenumber entered is valid
std::string check_phonenumber()
{
  std::string input;
  
  while(true)
  {
    input = ask("Phone number: "); 
    size_t len = input.length();
    if(input.empty() || len < 3 || ((input[0] != '+') && !std::isdigit(input[0])))
    {
      std::cout << "Please give a valid phonenumber" << std::endl;
      continue;
    }
    for (size_t i = 0; i < len; ++i)
    {
      if (i == 0 && input[i] == '+')
        continue;
      else if (!std::isdigit(input[i]))
      {
        std::cout << "Please give a valid phonenumber" << std::endl;
        break;
      }
      else if(i == len - 1)
        return (input);
    }
  }

  return ("");
}
