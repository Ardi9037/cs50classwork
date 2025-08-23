#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n; //declared the n outside of the do while loop cause it limits the use of n
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
