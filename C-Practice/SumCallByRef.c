#include<stdio.h>
#include<conio.h>
void main()
{
    int SumCR(int*, int*);
    int a,b,sum;
    printf("Enter two numbers.\n");
    scanf("%d%d",&a,&b);
    sum=SumCR(&a, &b);
    printf("Sum of %d and %d is %d.\n",a,b,sum);
    getch();
}
int SumCR(int *a,int *b)
{
    return *a+*b;
}