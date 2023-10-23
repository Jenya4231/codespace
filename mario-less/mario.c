#include <cs50.h>
#include <stdio.h>

int main(void)
{
    str hash = '#';

    int size = get_int("Size of pyramid: ");

    do
    {
        printf("%c\n", hash);
        hash += hash;
        size--;
    }
   while (size > 0);
}