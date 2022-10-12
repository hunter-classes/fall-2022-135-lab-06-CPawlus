#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.cpp"
#include "vigenere.cpp"
#include "decrypt.cpp"

TEST_CASE("Caesar Encryption Cases") 
{
   CHECK(shiftChar('B', 24) == 'Z');
   CHECK(shiftChar('A', 0) == 'A');
   CHECK(shiftChar('B', -1) == 'A');
   CHECK(encryptCaesar("Test", 1) == "Uftu");
   CHECK(encryptCaesar("Test", 0) == "Test");
   CHECK(encryptCaesar("Test", -1) == "Sdrs");
}

TEST_CASE("Vigenere Encryption Cases") 
{
   CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
   CHECK(encryptVigenere("Test", "c") == "Vguv");
   CHECK(encryptVigenere("1234", "move") == "1234");
   CHECK(encryptVigenere("-/#'2234", "cake") == "-/#'2234");
   CHECK(encryptVigenere("Juice", " ") == "Juice");
}

TEST_CASE("Caesar And Vigenere Decryption Cases") 
{
   CHECK(shiftCharReverse('G', 1) == 'F');
   CHECK(shiftCharReverse('Z', 0) == 'Z');
   CHECK(shiftCharReverse('B', -1) == 'C');
   CHECK(decryptCaesar("Test", 1) == "Sdrs");
   CHECK(decryptCaesar("Test", 0) == "Test");
   CHECK(decryptCaesar("Uftu", -1) == "Vguv");
   CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
   CHECK(decryptVigenere("Vguv", "c") == "Test");
   CHECK(decryptVigenere("1234", "move") == "1234");
   CHECK(decryptVigenere("-/#'2234", "cake") == "-/#'2234");
   CHECK(decryptVigenere("Juice", " ") == "Juice");
}

