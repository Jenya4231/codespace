#include <cs50.h>
#include <stdio.h>

const int min_population_size = 9;

int start_size;
int current_size;
int end_size;
int years_to_reach;

int input_start(void);
int input_end(void);
void calculate_population(int start);

int main(void)
{

    // TODO: Prompt for start size
    start_size = input_start();

    // TODO: Prompt for end size
    end_size = input_end();

    // TODO: Calculate number of years until we reach threshold
    current_size = start_size;
    do
    {
        calculate_population(current_size);
        printf("Size of population: %i\n", current_size);
        years_to_reach++;
    }
    while (current_size < end_size);


    // TODO: Print number of years
    printf("Years need: %i\n", years_to_reach);
}

int input_start(void)
{
    int n;

    do
    {
        n = get_int("Start population size: ");
    }
    while (n < min_population_size);

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