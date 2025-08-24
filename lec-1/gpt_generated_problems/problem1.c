#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char answer;
    do
    {
        answer = get_char("Do you want to Continue? (y/n): ");
        if (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N')
        {
            printf("Invalid input, try again!\n");
        }
    }
    while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N');

    if (answer == 'y' || answer == 'Y')
    {
        printf("Great! Let’s move on 🚀\n");
    }
    else if (answer == 'n' || answer == 'N')
    {
        printf("Okay, exiting... ❌\n");
    }
}
