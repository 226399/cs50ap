#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // declare variables
    int ithDigit;
    int sum = 0;
    
    //get isbn
    printf("ISBN: ");
    long long isbn = GetLongLong();
    
    //find sum of digits with multiplication factorizationness
    for (int i = 10; i >= 0; i--) {
        ithDigit = isbn % 10;
        sum += (ithDigit * i);
        isbn = isbn / 10;
    }
    
    
    if (sum % 11 == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}