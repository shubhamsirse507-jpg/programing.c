#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks:");
    scanf("%d", &marks);
    if(marks>=90)
    {
        printf("Pass With Distinction\n");
        printf("Grade is A");
    }
    else if(marks>=75)
    {
        printf("Grade is B");
    }
    else if(marks>=50)
    {
        printf("Pass\n");
        printf("Grade is C");
    }
    else if(marks<50)
    {
        printf("Fail\n");
        printf("Below 50");
    }
    return 0;
}
//o/p Enter your marks:85
//Grade is B