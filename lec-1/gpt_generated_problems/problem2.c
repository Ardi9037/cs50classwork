#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x, y, p, m, g;
    float v;
    char operation;
    x = get_int("x: ");
    y = get_int("y: ");
    p = x + y;
    m = x - y;
    g = x * y;
    v = (float) x / (float) y;
    do
    {
        operation = get_char("Which operation(+, -, *, /): ");
    }
    while (operation != '+' && operation != '-' && operation != '*' && operation != '/');

    if (operation == '+')
    {
        printf("sum: %i\n", p);
    }
    else if (operation == '-')
    {
        printf("difference: %i\n", m);
    }
    else if (operation == '*')
    {
        printf("product: %i\n", g);
    }
    else if (operation == '/')
    {
        printf("division: %.2f\n", v);
    }
}
