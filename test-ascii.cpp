// File excluded from testing as said for Task A in the Lab.
#include <iostream>

int main()
{
  // Variables
  std::string s = "Hello, World.";
  char c = ' ';
  // Conditionals
  for(int i = 0; i < s.length(); i++) 
  {
    c = s[i];
    std::cout << c << " " << (int)c << "\n";
  }
  return 0;
}