// libraries
#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

// start
int main(int argc, string argv[])
{
    string name = GetString();
    if (name != NULL)
    {
        // first symbol
        if ((name[0] >= 'a' && name[0] <= 'z')
        || (name[0] >= 'A' && name[0] <= 'Z'))
        {
            printf("%c", toupper(name[0]));
        }
        
        // checking
        for (int i = 1, n = strlen(name); i < n; i++)
        {
            if ((char) name[i] == 32)
            {
                printf("%c", toupper(name[i + 1]));
            }
        }
    }
    printf("\n");
}
// end
