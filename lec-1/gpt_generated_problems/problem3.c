#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n, i, j;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
//for problem no 3 I didn't know how to
//identify first and last row and column, that's where I took help.
