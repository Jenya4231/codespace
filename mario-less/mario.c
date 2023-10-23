#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char hash = '#';

    int size = get_int("Size of pyramid: ");

    for (int n = 0; n < size; n++)
    {
        printf("%c", hash);
    }

   printf("\n");
}

