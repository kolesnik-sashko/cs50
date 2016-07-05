// libraries
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// start
int main(int argc, string argv[])
{        
    if (argc != 2 || argv[1] == NULL)
    {
        printf("error!!!\n");
        return 1;
    }
    else
    {
        // data request
        int key = atoi(argv[1]);
        string text = GetString();
        if (key > 26)
        {
            key %= 26; 
        }
        // check and print
        for (int i = 0, n = strlen(text); i < n; i++)
        {
            if (isalpha(text[i]))
            { 
                // if "islower"               
                if (islower(text[i]))
                {                    
                    int letter = (int) text[i] + key;
                    if (letter > 122)
                    {
                        printf("%c", (char) (letter - 26));
                    }
                    else
                    {
                        printf("%c", (char) letter);
                    }
                }
                // if "isupper"
                else
                {
                    int letter = text[i] + key;
                    if (letter > 91)
                    {
                        printf("%c", (char) (letter - 26));
                    }
                    else
                    {
                        printf("%c", (char) letter);
                    }
                }
            }
            // if not "isalpha"
            else
            {
                printf("%c", text[i]);
            }           
            
        }
        printf("\n");
    }    
}
// end
