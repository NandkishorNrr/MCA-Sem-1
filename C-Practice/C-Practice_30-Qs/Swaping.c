#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b;
    printf(" Enter two no.");
    scanf("%d%d", &a, &b);
    printf("Befor swaping of no.\na= %d and b= %d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter swaping of no.\na= %d and b= %d", a, b);
    getch();
}
