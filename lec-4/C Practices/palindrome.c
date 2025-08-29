#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    string word = get_string("Word: ");
    int len = strlen(word);
    int is_palindrome = 1;

    for (int i = 0; i < len / 2; i++)
    {
        if (tolower(word[i]) != tolower(word[len - 1 - i]))
        {
            return is_palindrome = 0;
            break;
        }
    }
    if (is_palindrome)
    {
        printf("Your word is a Palindrome.\n");
    }
    else
    {
        printf("Your word isn't a Palindrome.\n");
    }
}
