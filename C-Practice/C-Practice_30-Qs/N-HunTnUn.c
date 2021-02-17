#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter a 3 digit number.\n");
    scanf("%d",&n);
    printf("%d hundreds ",n/100);
    printf("%d tens ",(n/10)%10);
    printf("%d units.",n%10);
    getch();
}
