#include <cs50.h>
#include <stdio.h>

const int min_population_size = 9;

int start_size;
int current_size;
int end_size;
int years_to_reach;

int input_start(void);
int input_end(void);

int main(void)
{

    // TODO: Prompt for start size
    start_size = input_start();

    // TODO: Prompt for end size
    end_size = input_end();

    // TODO: Calculate number of years until we reach threshold
    calculate_years();


    // TODO: Print number of years
}

int input_start(void)
{
    int n;

    do
    {
        n = get_int("Start population size: ");
    }
    while (n <= min_population_size);

    return n;
}

int input_end(void)
{
    int n;

    do
    {
        n = get_int("End population size: ");
    }
    while (n <= start_size);

    return n;
}

void calculate_population(int start)
{
    current_size = start;

    int born = start / 3;
    int die = start / 4;

    current_size += born - die;

}