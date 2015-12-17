#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string name = GetString();
    
    for (int i = 0, len = strlen(name); i < len; i++) {
        if (islower(name[i]))
        {
            printf("%c", toupper(name[i]));
        }
        else
        {
            printf("%c", name[i]);
        }
    }
    printf("\n");
}