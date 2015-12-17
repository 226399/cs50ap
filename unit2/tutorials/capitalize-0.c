#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name = GetString();
    
    for (int i = 0, len = strlen(name); i < len; i++) {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            printf("%c", name[i] - ('a' - 'A'));
        }
        else
        {
            printf("%c", name[i]);
        }
    }
    printf("\n");
}