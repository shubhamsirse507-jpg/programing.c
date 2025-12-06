//Stack(Push/Pop)
#include<stdio.h>
#include<conio.h>
#define max 5
void main()
{
    int stack[max],i,choice,val,top=-1;
    while(1)
    {
        printf("\n1.push\n2.pop\n3.display\n4.Exit\n Enter your choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        if(top==max-1)
        printf("Stack is overflow!");
        else{
            printf("Enter your choice:");
            scanf("%d",choice);
            stack[++top]=val;
        }
            break;
        case 2:
        if (top==-1)
        printf("Stack is underflow");
        else
        {
        printf("popped :%d",stack[top--]);
        }
        break;

        case 3:
         if (top==-1)
         printf("Stack is empty!");
         else
         {
            printf("stack element:");
            for(i=top;i>=0;i--)
            printf("%d",stack[i]);
            
        }
        break;

        case 4:Exit(0);
        default:printf("Invalid choice!");
        }
    }
    getch();
}    
        