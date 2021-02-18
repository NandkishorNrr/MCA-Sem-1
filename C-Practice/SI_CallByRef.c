#include<stdio.h>
#include<conio.h>
void main()
{
    float SI_CR(int*, int*, int *);
    int p,r,t;
    float SI;
    printf("Enter P, R, T.\n");
    scanf("%d %d %d",&p,&r,&t);
    SI=SI_CR(&p, &r,&t);
    printf("P =  %d\nR = %d\nT = %d\n\n",p,r,t);
    printf("Simple interest(SI) = %f",SI);
    getch();
}
float SI_CR(int *p,int *r, int *t)
{
    return ((*p)*(*r)*(*t))/100;
}