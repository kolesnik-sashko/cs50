// libraries
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// start
int main(int argc, string argv[])
{
    // check
    if (argc != 2)
    {
        printf("Usage: /pset2/vigenere <key> \n");
        return 1;
    }
    // check
    else if (argv[1])
    {        
        for (int i = 0, counter1 = strlen(argv[1]); i < counter1; i++)
        {
            if (!isalpha(argv[1][i]))
            {
                printf("Usage: /pset2/vigenere <key> \n");
                return 1;
            }
        }
    }

    // data request
    string text = GetString();
    
    string key = argv[1];
    
    // check and print       
    for (int i = 0, counter2 = 0, keyindex = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i]))
        {
            // check and print   
            keyindex = counter2 % strlen(key);
            if (islower(text[i]))
            {
                // check and print   
                if (islower(key[keyindex]))
                {
                    int answer = ((text[i] - 97 + key[keyindex] - 97) % 26) + 97;
                    printf("%c", answer);
                }
                // check and print   
                else
                {
                    int answer = ((text[i] - 97 + key[keyindex] - 65) % 26) + 97;
                    printf("%c", answer);
                }
            }
            // check and print   
            if (isupper(text[i]))
            {
                // check and print   
                if (islower(key[keyindex]))
                {
                    int answer = ((text[i] - 65 + key[keyindex] - 97) % 26) + 65;
                    printf("%c", answer);
                }
                // check and print   
                else
                {
                    int answer = ((text[i] - 65 + key[keyindex] - 65) % 26) + 65;
                    printf("%c", answer);
                }
            }
            counter2++;
        }
        // check and print   
        else
        {
            printf("%c", text[i]);
        }
    }
    printf("\n");
}
// end
