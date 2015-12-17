#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string name = GetString();
    
    for (int i = 0, len = strlen(name); i < len; i++) {
        printf("%c", toupper(name[i]));
    }
    printf("\n");
}