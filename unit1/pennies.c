#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    printf("Days in the month? ");
    int days = GetInt();
    printf("How many pennies on the first day? ");
    int pennies = GetInt();
    //printf("Pennies on day 1: %d", pennies);
    long long total = pennies;
    for (int i = 1; i <= days; i++) {
        total = pow(pennies, i);
        //printf("%lld\n", total);
    }
    double dollars = (double)total / 100;
    printf("$%.2f\n", dollars);
}