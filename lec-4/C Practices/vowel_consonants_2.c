#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string word = get_string("Word: ");
    char vowels_list[5] = {'a', 'e', 'i', 'o', 'u'};

    int vowels = 0, consonants = 0;

    for (int i = 0; i < strlen(word); i++)
    {
        char c = tolower(word[i]);
        if (isalpha(c))
        {
            int is_vowel = 0;
            for (int j = 0; j < 5; j++)
            {
                if (c == vowels_list[j])
                {
                    vowels++;
                    is_vowel = 1;
                    break;
                }
            }
            if (!is_vowel)
            {
                consonants++;
            }
        }
    }
    printf("Vowels: %i\n", vowels);
    printf("Consonants: %i\n", consonants);
}
