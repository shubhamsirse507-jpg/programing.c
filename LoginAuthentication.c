#include<stdio.h>
#include<string.h>

int main()
{
    char user[20];
    char pass[20];

    printf("Enter username: ");
    scanf("%s", user);

    printf("Enter password: ");
    scanf("%s", pass);

    if (strcmp(user, "admin") == 0)
    {
        if (strcmp(pass, "1234") == 0)// comp to string function
        {
            printf("Login success\n");
        }
        else
        {
            printf("Password wrong\n");
        }
    }
    else
    {
        printf("Username wrong\n");
    }

    return 0;
}