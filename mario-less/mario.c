#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string hash = "#";

    int size = get_int("Size of pyramid: ");

    do
    {
        printf("%s\n", hash);
        hash += hash;
        size--;
    }
   while (size > 0);
}