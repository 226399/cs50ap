// includes
#include <cs50.h>
#include <math.h>
#include <stdio.h>

// defined constants
#define MAX_DAYS 31
#define MIN_DAYS 28

int main(int argc, string argv[])
{
    //check correcty argc
    if (argc != 3 || atoi(argv[1]) < 28 || atoi(argv[1]) > 31 || atoi(argv[2]) < 0) {
        printf("usage: ./pennies <days> <pennis_on_first_day>\n");
        return 1;
    }
    // get a number of days in [28, 31]
    int days = atoi(argv[1]);
    
    // get a number of pennies in [0, inf)
    int pennies = atoi(argv[2]);
    
    // relatively few pennies required to get out of bounds of int
    long long total = pennies;
    
    // add double the amount of pennies of the previous day each day
    for(int i = 1; i < days; i++)
    {
        total += pennies * pow(2,i);
    }
        
    // output the total as dollars and cents only
    printf("$%.2f\n", ((double) total) / 100);
}