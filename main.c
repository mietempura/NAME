#include <stdio.h>
#include <string.h>

int main()
{
    char nama[100];

    printf("Insert your full name:");
    scanf("%[^\n]", nama);

    if (strcmp("Felcia Luhur", nama) == 0)
    {
        printf("Your NIM is 2902658882 and your favorite language is C");
    }
    else
    {
        printf("Who are you?");
    }

    return 0;
}