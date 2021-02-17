#include <stdio.h>
#include<conio.h>
void main()

{
    char op;
    float num1, num2, result=0;
     printf("Enter [number 1] [+ - * /] [number 2]\n");
       scanf("%f %c %f", &num1, &op, &num2);
        switch(op)
    {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            result = num1 / num2;
            break;

        default:
            printf("Invalid operator");
    }
     printf("%f %c %f = %f", num1, op, num2, result);
getch();

}
