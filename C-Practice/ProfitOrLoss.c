#include <stdio.h>
#include <conio.h>
void main()
{
    int cp, sp, profit, loss;
    printf("Enter the selling price :");
    scanf("%d", &sp);
    printf("Enter the cost price :");
    scanf("%d", &cp);
    if (sp > cp)
    {
        profit = sp - cp;
        printf("Profit Rs. %d", profit);
    }
    else if(cp > sp)
    {
        loss = cp - sp;
        printf("Loss Rs. %d", loss);
    }
    else
     printf("No profit, No loss.\n");
    getch();
}
