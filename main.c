#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, e, odd = 0, even = 0, sum = 0;
    printf("\t\t\t\t Welcome USER!\n");
    printf("Please enter integer values only.\n");
    printf("Enter the initial value: ");
    scanf("%d", &i);
    printf("Enter the ending value: ");
    scanf("%d", &e);
    if(i>e){
        printf("The initial value cannot be greater than ending value. Please try again with valid inputs.");
        exit(1);
    }
    for (n = i; n <= e; n++)
        if (n % 2 == 1)
        {
            odd++;
        }
        else
        {
            even++;
            sum = sum + n;
        }
    
    printf("There are %d odd numbers between %d and %d\n", odd, i, e);
    printf("There are %d evem numbers between %d and %d\n", even, i, e);
    printf("The sum of the even numbers between %d and %d is %d", i, e, sum);
    return 0;
}