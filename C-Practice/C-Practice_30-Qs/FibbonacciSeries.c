#include <stdio.h>
void main()
{
    int i, a = -1, b = 1, c, n;
    printf("Enter the valuve of N:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    getch();
}
