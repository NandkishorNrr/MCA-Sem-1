#include <stdio.h>
#include<conio.h>
void main()
{
    int  sum_even = 0, sum_odd = 0;
    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
            sum_even = sum_even + i;
        else
            sum_odd = sum_odd + i;
    }
    printf("Sum of first 10 even numbers is : %d", sum_even);
    printf("\nSum of first 10 odd numbers is : %d", sum_odd);
    getch();
}
