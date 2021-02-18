#include <stdio.h>
void main()
{
    int a, b, c, d, e, t, p;
    printf("Enter the marks of five sub. of student\n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    t = a + b + c + d + e;
    p = t / 5;
    if (p > 90)
        printf(" student got A+ Grade with :%d per.", p);
    else if (p > 75)
        printf(" student got A Grade with :%d per.", p);
    else if (p > 65)
        printf(" student got B Grade with :%d per.", p);
    else if (p > 55)
        printf(" student got C Grade with :%d per.", p);
    else if (p > 45)
        printf(" student got D Grade with :%d per.", p);
    else if (p > 35)
        printf(" student got E Grade with :%d per.", p);
    else
        printf(" Better luck next time...");
    getch();
}
