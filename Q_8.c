// 8. Employee Bonus Calculator
#include<stdio.h>
int main()
{
    int Salary, yofe, pRating;
    printf("Enter your Salary: ");
    scanf("%d", &Salary);
    printf("Enter your years of experience: ");
    scanf("%d", &yofe);
    printf("Enter your performance rating: ");
    scanf("%S", &pRating);
    if(yofe > 5)
    {
        printf("20per  bounus");
    }
    else if(pRating == 'A')
    {
        printf("10per  bounus");
    }
    else if(pRating == 'B')
    {
        printf("Extra 5per  bounus");
    }
    else
    {
        printf("No Extra bounus");
    }
    return 0;
}