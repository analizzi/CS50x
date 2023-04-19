#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = "Emma";
    int length = strlen(name);

    //prints out name as its characters
    for (int i = 0; i < length; i++)
    {
        printf("%c ", name[i]);
    }
    printf("\n");

    //prints out name as its integers, so the number representation of the letters
    for (int i = 0; i < length; i++)
    {
        printf("%i ", name[i]);
    }
    printf("\n");
}