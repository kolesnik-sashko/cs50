#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    int sigma(int m);
    do
    {
        printf("Give me a positive number: ");
        n = GetInt();
    }
    while (n < 1);
    
    int answer = sigma(n);
    printf("%i\n", answer);
}
    
int sigma(int m)
{
    if (m < 1)
    {
        return 0;
    }
    int sum = 0;
    for (int i = 1; i <= m; i++)
    {
        sum += i;
    }
    return sum;
}

