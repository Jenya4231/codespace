#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char hash = '#';

    int size = get_int("Size of pyramid: ");

    do
    {
        printf("%c", hash);
        size--;
    }
   while (size > 0);

   printf("\n");
}