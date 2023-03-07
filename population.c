#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size

  int ss;
  do
  {
      ss = get_int("Starting population size: ");
  }
  while (ss < 9);

    // TODO: Prompt for end size

  int es;
  do
  {
      es = get_int("Ending population size: ");
  }
  while (es < ss);

    // TODO: Calculate number of years until we reach threshold
    int p=ss;
    int n;
    for (n=0;p < es;n++)
    {
        p=p+(p/3)-(p/4);
    }

    // TODO: Print number of years
    printf("Years: %i\n", n);
}
