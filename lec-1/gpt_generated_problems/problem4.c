#include <stdio.h>
#include <cs50.h>

void repeat_word(string word, int n);
int main(void)
{
    string word = get_string("Word: ");
    int n;
    do
    {
        n = get_int("how many times: ");
    }
    while (n < 1);
    repeat_word(word, n);
}
void repeat_word(string word, int n)
{
    for ( int i = 0; i < n; i++)
    {
        printf("%s\n", word);
    }
}
//for no 4, I made the code that it's asking the user for the
//word to repeat and also asking how many times to repeat the word.
