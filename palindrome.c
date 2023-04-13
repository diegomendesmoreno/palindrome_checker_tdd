#include "palindrome.h"
#include <string.h>
#include <stdint.h>

// #define DEBUG  // Uncomment to debug
#define MAX_SIZE 100

void _sanitize_string(char * string)
{
    uint8_t str_size = strlen(string);
    char aux_string[MAX_SIZE];
    memset(aux_string, '\0', (str_size + 1));
    memcpy(aux_string, string, str_size);

    uint8_t k = 0;
    for(uint8_t i = 0; i < str_size; i++)
    {
        for(uint8_t j = k; j <= str_size; j++)
        {
            if(aux_string[j] == '\0')
            {
                string[i] = aux_string[j];
                break;
            }

            if( (aux_string[j] >= '0' && aux_string[j] <= '9') ||
                (aux_string[j] >= 'A' && aux_string[j] <= 'Z') ||
                (aux_string[j] >= 'a' && aux_string[j] <= 'z') )
            {
                string[i] = aux_string[j];
                k = j + 1;
                break;
            }
        }

        if(string[i] == '\0')
        {
            break;
        }
    }
}

void _capitalize_string(char * string)
{
    uint8_t str_size = strlen(string);

    for(uint8_t i = 0; i < str_size; i++)
    {
        if(string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] = string[i] - 32;
        }
    }
}

void _reverse_string(char * string)
{
    uint8_t str_size = strlen(string);
    char aux_string[MAX_SIZE];
    memset(aux_string, '\0', (str_size + 1));
    memcpy(aux_string, string, str_size);

    uint8_t i = 0;
    uint8_t j = str_size - 1;
    for(i = 0; i < str_size; i++)
    {
        string[i] = aux_string[j];
        j--;
    }
}

bool_t palindrome_check(char word[100])
{
    bool_t check_result = FALSE;
    char reversed_word[MAX_SIZE];
    memset(reversed_word, '\0', (strlen(word) + 1));    // Clean string

#ifdef DEBUG
    printf("\nOrigi: %s", word);
#endif

    // Leave only numbers and letters
    _sanitize_string(word);

#ifdef DEBUG
    printf("\nSanit: %s", word);
#endif

    // Capitalize letters
    _capitalize_string(word);

#ifdef DEBUG
    printf("\nCapit: %s", word);
#endif

    memcpy(reversed_word, word, strlen(word));

    _reverse_string(reversed_word);

#ifdef DEBUG
    printf("\nRever: %s\n", reversed_word);
#endif

    if(!strcmp(word, reversed_word))
    {
        check_result = TRUE;
    }
    else
    {
        check_result = FALSE;
    }

    return check_result;
}
