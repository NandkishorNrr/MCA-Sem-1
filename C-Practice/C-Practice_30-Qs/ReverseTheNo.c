#include<stdio.h>
void main()
{
    int n,o=0,r;
    printf("Enter a no:");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        o=o*10+r;
        n=n/10;
    }
    printf("After reverse of no.:%d",o);
    getch();
}
