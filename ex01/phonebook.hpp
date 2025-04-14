/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 20:24:36 by kmummadi          #+#    #+#             */
/*   Updated: 2025/04/14 08:42:04 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string.h>
# include "contacts.hpp"

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class Phonebook
{
  private:
    Contacts p_contact[8];
    int p_index;
    int p_all_filled;

  public:
    // Constructor
    Phonebook();

    // Destructor
    ~Phonebook();

    void add_contact();
    void search_contact();
    void print_contacts();
    void exit_program();
};

# endif
