//9. E-Commerce Discount Calculator
#include<stdio.h>
#include<string.h>
int main(void)
{
    int Bill_amount;
    float Add_Gst = 0.18 * Bill_amount;
    char vip[20];
    printf("Enter your Bill Amount: ");
    scanf("%d", &Bill_amount);
    printf("Enter your VIP status (yes/no): ");
    scanf("%s", vip);
      Add_Gst = Bill_amount * 0.18;
    printf("Final Bill_amount: %.2f\n", Bill_amount + Add_Gst);
    if(Bill_amount > 5000)
    {
        printf("You get 20 Per Discount");
    }
    else if (Bill_amount > 2000)
    {
        printf("you get 10 per Discount");
    }
    else if (strcmp(vip, "yes") == 0) 
    {
        printf("you get 5 per Discount");
    }
    else
    {
        printf("No Discount");
    }
    return 0;
}