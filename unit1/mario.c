#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //get height
    printf("height: ");
    int height = GetInt();
    
    //check if height is in proper range
    while (height < 0 || height > 23) {
        printf("Retry: ");
        height = GetInt();
    }
    
    
    //loop over correct number of rows based on input
    for (int i = 0; i < height; i++) {
        //print spaces
        for (int j = (height - i - 1); j > 0; j--) {
            printf(" ");
        }
        //print hashes
        for (int k = 0; k < i + 2; k ++) {
            printf("#");
        }
        //print newline
        printf("\n");
    }
}
