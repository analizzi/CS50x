#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for input (height)

    int height;
  do
  {
      height = get_int("Height: ");
  }
  while (height > 8 || height < 1);

    // Build a pyramind

for (int number_row = 0 ; number_row < height ; number_row++)
{
        // Determine number of spaces
    for (int number_space = 0 ; number_space < height - number_row - 1 ; number_space++)
    {
        printf(" ");
    }
        // Determine number of hashes
    for (int number_hash = 0 ; number_hash < number_row + 1 ; number_hash++)
    {
        printf("#");
    }
    printf("\n");
}
}