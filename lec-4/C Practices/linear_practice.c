#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int numbers [] = {4, 9, 2, 7, 1, 10, 6, 3, 8, 5};
    int n = get_int("Number: ");
    int found = 0;

    for (int i = 0; i < 10; i++)
    {
        if (n == numbers[i])
        {
            printf("Number %i found in location %i\n", n, i);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Number %i isn't on the list\n", n);
    }
}
