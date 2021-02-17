#include <stdio.h>
#include <conio.h>
int GCD(int a, int b)
{
    if (a % b == 0)
        return (a);
    if (b % a == 0)
        return (b);
    if (a > b)
        return (GCD(a % b, b));
    else
        return (GCD(a, b % a));
}
#include <stdio.h>
#include <conio.h>
main()
{
    clrscr();
    printf("GCD is %$d", GCD(105, 91));
    getch();
}
