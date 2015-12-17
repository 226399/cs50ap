#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string name = GetString();
    
    //print first letter capitalized
    printf("%c", toupper(name[0]));
    
    //iterate over rest of name and capitalize letters after spaces
    for (int i = 0, len = strlen(name); i < len; i++) {
        if (isspace(name[i])){
            printf("%c", toupper(name[i+1]));
        }
    }
    printf("\n");
}