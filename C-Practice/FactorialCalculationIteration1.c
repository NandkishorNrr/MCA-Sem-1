#include <stdio.h>
#include <conio.h>
void main()
{
    int F = 1, x, n;
    printf("\nEnter a no. to find factorial:");
    scanf("%d", &n);
    x = n;
    while (n >= 1)
    {
        F = F * n;
        n--;
    }
    printf("Factorial of %d is %d", x, F);
    getch();
}
