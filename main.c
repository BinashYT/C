#include <stdio.h>
#include <stdlib.h>
int main()
{
    char sign;
    int a, b, result;
    printf("\t\t\t Welcome to Calculator!\n");
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the arithmetic operator (+,-,*,/): ");
    scanf(" %c", &sign);
    printf("Enter the second number: ");
    scanf("%d", &b);

    switch (sign)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        if(b==0){
            printf("Math Error! Cannot divide by zero.");
            exit(1);
        }
        else{
            result = a/b;
        }
        break;
    default:
        printf("Please enter a valid number or operator.");
        break;
    }

    printf("Output: %d", result);
    return 0;
}