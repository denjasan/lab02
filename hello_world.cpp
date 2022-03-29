#include <iostream>
#include <string>

int
main()
{
  std::string name;             // variable for name
  std::getline(std::cin, name); // read string
  std::cout << "Hello World from " << name << std::endl; // print result
  return 0;
}
