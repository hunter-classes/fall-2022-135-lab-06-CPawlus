/*
Author: Christopher Pawlus
Course: CSCI-136
Instructor: Professor Zamansky
Assignment: Strings and Ciphers, main.cpp, Lab 6.

This program uses different types of ciphers to encrypt
and decrypt certain lines of string.
*/

#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main()
{
  std::cout << shiftChar('A', 2) << "\n";
  std::cout << "-----\n";
  std::cout << encryptCaesar("Way to go!", 5) << "\n";
  std::cout << "-----\n";
  std::cout << encryptVigenere("Hello, World!", "cake") << "\n";
  std::cout << "-----\n";
  std::cout << decryptCaesar(encryptCaesar("Way to go!", 5), 5) << "\n";
  std::cout << decryptVigenere(encryptVigenere("Hello, World!", "cake"), "cake") << "\n";
  return 0;
}
