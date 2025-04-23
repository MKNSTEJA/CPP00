/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 22:45:01 by kmummadi          #+#    #+#             */
/*   Updated: 2025/04/22 22:57:34 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"
# include "contacts.hpp"

# ifndef UTILS_HPP
# define UTILS_HPP

// Define colours
const std::string RED     = "\033[1;31m";
const std::string GREEN   = "\033[1;32m";
const std::string YELLOW  = "\033[1;33m";
const std::string BLUE    = "\033[1;34m";
const std::string ORANGE  = "\033[38;5;208m";  // Extended ANSI: orange!
const std::string RESET   = "\033[0m";
const std::string ITALIC  = "\033[3m";

std::string shorten_string(std::string str);
void print_columns(void);
std::string ask(std::string prompt);
std::string check_phonenumber();
void colorprint(std::string str, const std::string color);

# endif
