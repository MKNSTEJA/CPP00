# include "contacts.hpp"

void contacts::fill_contact()
{
  contacts::save_first_name();
  contacts::save_last_name();
  contacts::save_nickname();
  contacts::save_phonenumber();
  contacts::save_darkest_secret();
}

void contacts::save_first_name()
{
  std::cout << "First Name: ";
  std::cin >> contacts::first_name;
  std::cout << std::endl;
}

void contacts::save_last_name()
{
  std::cout << "Last Name: ";
  std::cin >> contacts::last_name;
  std::cout << std::endl;
}

void contacts::save_nickname()
{
  std::cout << "Nickname: ";
  std::cin >> contacts::nickname;
  std::cout << std::endl;
}

void contacts::save_phonenumber()
{
  std::cout << "Phonenumber: ";
  std::cin >> contacts::phone_number;
  std::cout << std::endl;
}

void contacts::save_darkest_secret()
{
  std::cout << "Darkest secret: ";
  std::cin >> contacts::darkest_secret;
  std::cout << std::endl;
}
