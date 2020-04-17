#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Write only keyword after ./vigenere \n");
        return 1;
    }
    else
    {
        for(int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (!isalpha(argv[1][i]))
            {
                printf("Only letters needs for key! \n");
                return 1;
            }
        }
    }

    string k = argv[1]; //keyword for code
    int k_len = strlen(k);
    //printf("strlen: %i \n", k_len);
    string p = get_string("Enter text for code: "); //plaintext for encode

    for (int i = 0, n = strlen(p); i < n; i++)
    {
        int k_key = tolower(k[i % k_len]) - 97;
        //printf("%i", k_key);

        if (islower(p[i]))
        {
            printf("%c", (p[i] - 'a' + k_key ) % 26 + 'a' );
        }
        else if (isupper(p[i]))
        {
            printf("%c", (p[i] - 'A' + k_key ) % 26 + 'A' );
        }
        else
        {
            printf("%c", p[i]);
        }
    }

    printf("\n");




}