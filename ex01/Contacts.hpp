/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmummadi <kmummadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 20:23:26 by kmummadi          #+#    #+#             */
/*   Updated: 2025/04/13 20:24:24 by kmummadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string.h>
# include <ostream>

# ifndef CONTACTS_HPP
# define CONTACTS_HPP

class Contacts
{
  private:
    std::string p_first_name;
    std::string p_last_name;
    std::string p_nickname;
    std::string p_phone_number;
    std::string p_darkest_secret;

  public:
    // Constructor
    Contacts();

    // Destructor
    ~Contacts();

    // Setter functions
    void save_first_name(std::string first_name);
    void save_last_name(std::string last_name);
    void save_nickname(std::string nickname);
    void save_phonenumber(std::string phonenumber);
    void save_darkest_secret(std::string darkest_secret);

    // Getter functions
    std::string get_first_name();
    std::string get_last_name();
    std::string get_nickname();
    std::string get_phonenumber();
    std::string get_darkest_secret();
};

# endif
