#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Creates an array of size n, where each element is 2 times the previous one

int main(void)
{
    int n;
    do
    {
        n = get_int("Length: ");
    }
    while (n < 1);

    int powers[n];

    powers[0] = 1;
    printf("%i\n", powers[0]);

    for(int i = 1; i < n; i++)
    {
    powers[i] = 2 * powers[i - 1];
    printf("%i\n", powers[i]);
    }
}