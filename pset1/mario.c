// libraries
#include <stdio.h>
#include <cs50.h>

// start
int main(void)
{
    int x;
    do
    {       
        printf("heigth: ");
        x = GetInt();
        if (x == 0)
        {
            return 0;
        }
    }
    // conditional test
    while ((x < 1) || (x > 23));
    
    int slashes = 2;
    int backspase = x;
    // print piramide
    while (backspase > 0)
    {    
        // print backspases    
        for (int i = backspase; i > 1; i--)
        {        
            printf(" ");       
        } 
        // print slashes       
        for (int k = slashes; k > 0; k--)
        {        
            printf("#");       
        }
        // print "\n"
        printf("\n");
        backspase--;
        slashes++;
    }
}
// end
