#include <cs50.h>
#include <stdio.h>

int size_input(void);

int main(void)
{
    char hash = '#';

    int size = size_input();

    for (int n = 0; n < size; n++)
    {
        for (int i = n; i > 0; i--)
        {
            printf("%c", hash);
        }
        printf("%c\n", hash);
    }

   printf("\n");
}

int size_input(void)
{
    int n;
    do
    {
        n = get_int("Size of pyramid: ");
    }
    while (n < 1 || n > 8);
    return n;
}