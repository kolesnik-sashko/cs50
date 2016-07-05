#include <stdio.h>
#include <cs50.h>

int GetPositiveInt(void);

int main(void)
{
   int n = GetPositiveInt();
   printf("your number is %i!\n", n);    
}

int GetPositiveInt(void)
{
    int n;
    do
    {
    printf("get positive number: ");
    n = GetInt();
    }
    while (n < 1);  
    return n;  
}
