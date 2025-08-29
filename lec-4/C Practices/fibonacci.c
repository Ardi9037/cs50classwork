#include <cs50.h>
#include <stdio.h>

int fibonacci(int n);
int main(void)
{
    int n = get_int("Number: ");
    printf("Fibonacci(%i): %i\n", n, fibonacci(n));
}

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci (n -2);
    }
}
