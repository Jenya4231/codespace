#include <cs50.h>
#include <stdio.h>

int size_input(void);

int main(void)
{
    char hash = '#';

    int size = size_input();

    for (int n = 0; n < size; n++)
    {
        int j = 1 + n;

        for (int i = 0; i < size; i++)
        {
            if (size - j == 0)
            {
                printf("%c", hash);
            }
            else
            {
                printf(" ");
                j++;
            }
        }
        printf("\n");
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
