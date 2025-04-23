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

std::string shorten_string(std::string str);
void print_columns(void);
std::string ask(std::string prompt);
std::string check_phonenumber();

# endif
