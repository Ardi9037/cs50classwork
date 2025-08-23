
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    float z = (float) x / (float) y;
    printf("answer %.5f\n", z); //%.5f - I want output to show five decimal numbers
}
