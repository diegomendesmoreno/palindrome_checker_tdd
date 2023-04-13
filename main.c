#include <stdio.h>
#include "palindrome.h"

#define MAX_NAME_SZ 256

int main(void)
{
    char * word;
    
    printf("Enter a string to check if it is a palindrome (not case sensitive): ");
    fgets(word, MAX_NAME_SZ, stdin);
    
    bool_t result = palindrome_check(word);

    if(result == TRUE)
    {
        printf("String \"%s\" is a palindrome\n", word);
    }
    else
    {
        printf("String \"%s\" is NOT a palindrome\n", word);
    }
    
    return 0;
}
