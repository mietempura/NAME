#include <stdio.h>
#include <string.h>

int main()
{
    char nama[100];
    int age;

    printf("Insert your full name for verification:");
    scanf("%[^\n]", nama);
    //"%[^\n]" scan sampai new line

    if (strcmp("Felcia Luhur", nama) == 0)
    {
        printf("Welcome!");
    }
    else
    {
        printf("Who are you?");
    }

    printf("\nfor further verification, how old are you?");
    scanf("%d", &age);

    if(age == 17)
    {
        printf("You are Felcia! Come in!");
    }
    else
    {
        printf("You're not her!");
    }

    return 0;
}