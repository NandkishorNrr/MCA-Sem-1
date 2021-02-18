#include <stdio.h>
void main()
{
    int n, t = 0;
    printf(" Enter the a no.");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        t = n*i;
        printf("%d\n", t);
    }
    getch();
}
