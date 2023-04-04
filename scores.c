#include <stdio.h>
#include <cs50.h>

// Purpose: Average out test scores

const int N = 5;  // Number of test scores to average

float average (int array[]);


int main(void)
{
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Scores: ");
    }

    printf("My average is %f\n", average(scores));
}

float average (int array[]) // Average test scores
{
    int sum = 0;
    for(int i = 0; i < N; i++)
    {
        sum = sum + array[i];
    }
    return sum / (float) N;
}
