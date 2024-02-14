#include <stdio.h>

void withmidname(char name1[], char name2[], char name3[])
{
    printf("%c %c %s", name1[0], name2[0], name3);
}

void withmidname2(char name1[], char name3[])
{
    printf("%c %s", name1[0], name3);
}

int main()
{
    char name1[100];
    char name2[100];
    char name3[100];
    printf("Do you have a middle name?\n");
    printf("If yes press 1, if no press 0:\n");
    int ans;
    scanf("%d", &ans);

    // Clear input buffer
    while (getchar() != '\n');

    if (ans == 1)
    {
        printf("Enter your first name: ");
        fgets(name1, sizeof(name1), stdin);
        printf("Enter your middle name: ");
        fgets(name2, sizeof(name2), stdin);
        printf("Enter your last name: ");
        fgets(name3, sizeof(name3), stdin);
    }
    else
    {
        printf("Enter your first name: ");
        fgets(name1, sizeof(name1), stdin);
        printf("Enter your last name: ");
        fgets(name3, sizeof(name3), stdin);
    }
    if (ans == 1)
    {
        withmidname(name1, name2, name3);
    }
    else
    {
        withmidname2(name1, name3);
    }
    return 0;
}
