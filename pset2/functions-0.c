#include <stdio.h>
#include <cs50.h>
#include <string.h>

void PrintName(string name);

int main(void)
{
    printf("your name is: ");
    string s = GetString();
    PrintName(s);
}

 void PrintName(string name)
{
    printf("hello, %s!!\n", name);
}
