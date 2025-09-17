#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Number: ");
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int start = 0, end = 9;

    for (int i = 0; i < 10; i++) // while(start <= end) works too
    {
        int mid = (start + end) / 2;
        if (numbers[mid] == n)
        {
            printf("Found\n");
            return 0;
        }
        else if (numbers[mid] > n)
        {
            start = mid - 1;
        }
        else if (numbers[mid] < n)
        {
            start = mid + 1;
        }
    }
    printf("Not Found\n");
    return 1;
}
