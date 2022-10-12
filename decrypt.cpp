#include <iostream>
#include "decrypt.h"

// Functions
char shiftCharReverse(char c, int rshift) 
{
   char s = ' ';
   s = (int)c;
   s = c - rshift;
   return s;
}

std::string decryptCaesar(std::string ciphertext, int rshift) 
{
   std::string newtext = "";
   char c = ' ';
   for(int i = 0; i < ciphertext.length(); i++) 
   {
      if(isalpha(ciphertext[i])) 
      {
         c = ciphertext[i];
         c = shiftCharReverse(c, rshift);
         if(isalpha(c))
         {
            newtext += c;
         }
         else 
         {
            c = (int)c + 26;
            newtext += c;
         }
      }
      else
      {
         c = ciphertext[i];
         newtext += c;
      }
   }
   return newtext;
}

std::string decryptVigenere(std::string ciphertext, std::string keyword) 
{
   std::string newtext = "";
   int len = keyword.length();
   int count = 0;
   int val = 0;
   char c = ' ';
   char c2 = ' ';
   for(int i = 0; i < ciphertext.length(); i++) 
   {
      if(isalpha(ciphertext[i])) 
      {
         if(count >= len) 
         {
            count = 0;
         }
         c = ciphertext[i];
         c2 = keyword[count];
         for(int o = 97; o < 123; o++) 
         {
            if((int)c2 == o) 
            {
               val = o-97;
            }
         }
         c = (int)c - val;
         newtext += c;
         count++;
         val = 0;
      }
      else
      {
         c = ciphertext[i];
         newtext += c;
      }
   }

   return newtext;  
}