#include <iostream>

int main(int argc, char **argv)
{
  // Check for no arguments
  if (argc == 1)
      std::cout << "* LOUD AND UNBREAKABLE NOISE *" << std::endl;
  else
  {
    // Start printing the msg in upper case.
    for(int i = 1; argv[i]; i++)
    {
      for(int j = 0; argv[i][j]; j++)
       std::cout << (char)toupper(argv[i][j]);
      std::cout << " ";
    }
    std::cout << std::endl;
  }

  return (0);
}
