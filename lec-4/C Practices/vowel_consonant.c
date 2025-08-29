#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Word: ");
    int vowels = 0, consonants = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        char c = tolower(s[i]);
        if (isalpha(c))
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }
    printf("Vowels: %i\n", vowels);
    printf("Consonants: %i\n", consonants);
}
