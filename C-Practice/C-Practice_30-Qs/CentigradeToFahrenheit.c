#include <stdio.h>
#include<conio.h>
void main()
{
    float C, F;
    printf("Enter the value of F:");
    scanf("%f", &F);
    C = (F - 32) * 0.55;
    printf("The value of C:%f", C);
    getch();
}
