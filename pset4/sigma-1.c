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
    if (m <= 0)
    {
        return 0;
    }
    return m + sigma(m - 1);
}

