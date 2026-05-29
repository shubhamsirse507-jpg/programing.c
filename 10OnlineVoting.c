// 10. Online Voting Eligibility Checker
#include<stdio.h>
int main()
{
    int Age;
    char Citizenship;
    char CriminalRecord ;
    printf("Enter your Age: ");
    scanf("%d", &Age);
    printf("Are you a citizen of India ? (y/n): ");
    scanf(" %c", &Citizenship);
    printf("Do you have a criminal record? (y/n): ");
    scanf(" %c", &CriminalRecord);
    if (Age >= 18 && Citizenship == 'y' && CriminalRecord == 'n')
    {
        printf("you are eligible to vote");
    }
    else
    {
        printf("you are not eligible to vote");
    }
    return 0;
}
/* o/p
Enter your Age: 20
Are you a citizen of India ? (y/n): y
Do you have a criminal record? (y/n): n
you are eligible to vote
*/ 
