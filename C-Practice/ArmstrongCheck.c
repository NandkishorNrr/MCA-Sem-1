#include <stdio.h>
#include <conio.h>
void main()
{
    int n, s, r,con=0,temp;
    printf("Enter a number.\n");
    scanf("%d",&n);
    temp=n;
    while (temp!=0)
    {
        temp=temp/10;
        con++;
    }
   
        s = 0;
        temp = n;
        while (temp != 0)
        {
            r = temp % 10;
            s = s + mlt(r,con);
            temp = temp / 10;
        }
        if (s == n)
            printf("\n%d is an Armstrong number.", n);
            else
            printf("\n%d is not an Armstrong number.", n);
}
int mlt(int num,int con)
{
    int r=num;
    for (int i = 0; i < con-1; i++)
    {
        num=num*r;
    }
    return num;
}
