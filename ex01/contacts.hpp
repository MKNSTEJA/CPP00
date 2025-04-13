# include <iostream>
# include <string.h>
# include <ostream>

# ifndef CONTACTS_HPP
# define CONTACTS_HPP

class contacts
{
  private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

  public:
    void fill_contact();
    void save_first_name();
    void save_last_name();
    void save_nickname();
    void save_phonenumber();
    void save_darkest_secret();
};

# endif
