#include <stdio.h>
#include <string.h>

int main()
{
    int Age;
    char Gender[20];
    char Ticket_class[20];
    printf("Enter your Age: ");
    scanf("%d", &Age);
    printf("Enter your Gender: ");
    scanf("%19s", Gender);
    printf("Enter your Ticket class: ");
    scanf("%19s", Ticket_class);
    if (Age >= 60)
    {
        printf("You are eligible for senior citizen discount\n");
    }
    else if (strcmp(Gender, "Female") == 0)
    {
        printf("You get female discount\n");
    }
    else if (strcmp(Ticket_class, "AC class") == 0)
    {
        printf("AC class extra charge applies\n");
    }
    else 
    {
        printf("No discount applicable\n");
    }
    return 0;
}