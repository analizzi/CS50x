#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Asking information for phonebook
    string name = get_string("What is your name?\n");
    int age = get_int("What is your age?\n");
    long phone_number = get_long("What is your phone number?\n");

    // Printing information
    printf("Name is %s. Age is %i. Phone number is %li\n", name, age, phone_number);
}