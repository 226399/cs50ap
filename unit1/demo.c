#include <stdio.h>
#include <cs50.h>

int main(void)
{

   int beatrice = 12;
   int userGuess = 0;
   
   while (userGuess != beatrice) {
      if (userGuess < beatrice) {
         printf("you're too low, try again!\n");
      }
      
      printf("Guess how old beatrice is!\n");
      userGuess = GetInt();
   }
   
   printf("the loop is over!");
}