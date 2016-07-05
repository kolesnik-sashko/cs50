#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    do
    {
    printf("number of people in room: ");
    n = GetInt();
    }
    while (n < 1);
    
    int ages[n];
    
    for (int i = 0; i < n; i++)
    {
        printf("age of person %i: ", i + 1);
        ages[i] = GetInt();
    }  
    
    printf("time passes....\n");
    for (int i = 0; i < n; i++)
    {
        printf("a year from now, the person %i will be %i year old\n", i + 1, ages[i] + 1);        
    }  
}

