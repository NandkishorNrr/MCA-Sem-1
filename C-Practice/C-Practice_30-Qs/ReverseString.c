#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    char a[20];
    printf("Enter a string:\n");
    gets(a);
    strrev(a);
    printf("%s",a);
    getch();
}
