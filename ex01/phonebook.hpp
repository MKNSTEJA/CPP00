# include <iostream>
# include <string.h>
# include "contacts.hpp"

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class phonebook
{
  private:
    contacts contact[8];

  public:
    void addcontact();
    void searchcontact();
    void exit_program();
};

# endif
