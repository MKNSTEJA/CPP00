/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 20:20:26 by kmummadi          #+#    #+#             */
/*   Updated: 2025/04/14 20:11:15 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "contacts.hpp"

// Constructor
Contacts::Contacts(void)
{
  // std::cout << "<-- Created contact class --->" << std::endl;
  return;
}

// Destructor
Contacts::~Contacts(void)
{
  // std::cout << "<--- Destroyed contact class --->" << std::endl;
  return;
}

// Setter functions 

void Contacts::save_first_name(std::string first_name)
{
  this->p_first_name = first_name;
  return;
}

void Contacts::save_last_name(std::string last_name)
{
  this->p_last_name = last_name;
  return;
}

void Contacts::save_nickname(std::string nickname)
{
  this->p_nickname = nickname;
  return;
}

void Contacts::save_phonenumber(std::string phonenumber)
{
  this->p_phone_number = phonenumber;
  return;
}

void Contacts::save_darkest_secret(std::string darkest_secret)
{
  this->p_darkest_secret = darkest_secret;
  return;
}

// Getter functions

std::string Contacts::get_first_name(void)
{
  return (p_first_name);
}

std::string Contacts::get_last_name(void)
{
  return (p_last_name);
}

std::string Contacts::get_nickname(void)
{
  return (p_nickname);
}

std::string Contacts::get_phonenumber(void)
{
  return (p_phone_number);
}

std::string Contacts::get_darkest_secret(void)
{
  return (p_darkest_secret);
}

