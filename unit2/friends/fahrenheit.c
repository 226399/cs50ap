#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    //check correcty argc
    if (argc != 2) {
        printf("usage: ./farhenheit <temp>\n");
        return 1;
    }
    
    // get celsius from user
    float celsius = atoi(argv[1]);
    
    // convert to fahrenheit; no float errors b/c celsius is a float
    float fahrenheit = (celsius * 9) / 5 + 32;
    printf("F: %.1f\n", fahrenheit);
}