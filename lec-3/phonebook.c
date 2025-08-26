#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

typedef struct
{
    string name;
    string number;
}
persons;

int main(void)
{
    persons people[3];

    people[0].name = "ardi";
    people[0].number = "+880-1711111111";

    people[1].name = "arik";
    people[1].number = "+880-1722222222";

    people[2].name = "anisa";
    people[2].number = "+880-1733333333";

    string search = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcasecmp(people[i].name, search) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}
