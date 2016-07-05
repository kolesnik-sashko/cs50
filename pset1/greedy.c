// libraries
#include <stdio.h>
#include <cs50.h>
#include <math.h>

// start
int main(void)
{
    int count = 0;
    float money;
    do
    {     	
        printf("O hai! How much change is owed? \n");
        money = GetFloat();
    }
    // conditional test
    while (money < 0);
    money = round(money * 100);
    
    // check
    while (money >= 25)
    {
        money -= 25;
        count++;
    }
    
    // check
    while (money >= 10)
    {
        money -= 10;
        count++;
    }
    
    // check
    while (money >= 5)
    {
        money -= 5;
        count++;
    }
    
    // check
    while (money >= 1)
    {
        money -= 1;
        count++;
    }
    // end
    printf("%d\n", count);
}
