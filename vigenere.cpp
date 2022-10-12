#include <iostream>
#include "vigenere.h"

// Functions
std::string encryptVigenere(std::string plaintext, std::string keyword) 
{
   std::string newtext = "";
   int len = keyword.length();
   int count = 0;
   int val = 0;
   char c = ' ';
   char c2 = ' ';
   for(int i = 0; i < plaintext.length(); i++) 
   {
      if(isalpha(plaintext[i])) 
      {
         if(count >= len) 
         {
            count = 0;
         }
         c = plaintext[i];
         c2 = keyword[count];
         for(int o = 97; o < 123; o++) 
         {
            if((int)c2 == o) 
            {
               val = o-97;
            }
         }
         c = (int)c + val;
         newtext += c;
         count++;
         val = 0;
      }
      else
      {
         c = plaintext[i];
         newtext += c;
      }
   }

   return newtext;  
}

