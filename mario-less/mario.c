#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char hash = '#';

    int size = get_int("Size of pyramid: ");

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
    
}