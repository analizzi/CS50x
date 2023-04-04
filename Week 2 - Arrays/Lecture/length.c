#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Determine length of this string and print length

int main(void)
{
    string name = get_string("What's your name? ");

    // Method 1
    int n = 0;
    while (name[n] != '\0')  // Asking whether each subsequent character in string is null 0 character
    {
        n++;
    }
    printf("String length via loop: %i\n", n);

    // Method 2
    int l = strlen(name);
    printf("String length via strlen: %i\n", l);
}