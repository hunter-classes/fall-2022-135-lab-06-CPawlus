#include <iostream>
#include "caesar.h"

// Functions
char shiftChar(char c, int rshift) 
{
   char s = ' ';
   s = (int)c;
   s = c + rshift;
   return s;
}

std::string encryptCaesar(std::string plaintext, int rshift) 
{
   std::string newtext = "";
   char c = ' ';
   for(int i = 0; i < plaintext.length(); i++) 
   {
      if(isalpha(plaintext[i])) 
      {
         c = plaintext[i];
         c = shiftChar(c, rshift);
         if(isalpha(c))
         {
            newtext += c;
         }
         else 
         {
            c = (int)c - 26;
            newtext += c;
         }
      }
      else
      {
         c = plaintext[i];
         newtext += c;
      }
   }
   return newtext;
}
