#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c;
    printf("Enter three no.:");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
            printf("%d is greates.", a);
        else
            printf("%d is greatest.", c);
    }
    else if (b > c)
    {
        printf("%d is greates.", b);
    }
    else
        printf("%d is greates.", c);
    getch();
}
