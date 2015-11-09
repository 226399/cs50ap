#include <cs50.h>
#include <math.h>
#include <stdio.h>

#define QUARTER 25
#define DIME 10
#define NICKEL 5
#define PENNY 1

int main(int argc, string argv[])
{
    int coins = 0;
    printf("How much change is owed?\n");
    float user_input = GetFloat();
    while (user_input < 0) {
        printf("How much change is owed?\n");
        user_input = GetFloat();
    }
    user_input *= 100;
    int rounded_input = round(user_input);
    
    //add quarters to total_coins
    coins += (rounded_input / QUARTER);
    //get remainder of money after subtracting quarters
    int remainder = (rounded_input % QUARTER);
    
    coins += (remainder / DIME);
    remainder = (remainder % DIME);
    
    coins += (remainder / NICKEL);
    remainder = (remainder % NICKEL);
    
    //just add ones for pennies
    coins += remainder;
    
    printf("%d\n", coins);
}