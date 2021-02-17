#include <stdio.h>
#include <conio.h>
void main()
{
    int n, u, t, h, sum;
    printf("Enter a three digit no.:");
    scanf("%d", &n);
    u = n % 10;
    t = (n / 10) % 10;
    h = n / 100;
    sum = u + t + h;
    printf("Sum of digits: %d", sum);
    getch();
}
