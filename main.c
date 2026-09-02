#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
    int i, e, odd = 0, even = 0, sum = 0;
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
    while(i<=e){
        if(i%2 == 1){
            odd++;
        }
        else{
            even++;
            sum = sum + i;
        }
        i++;
    }
     printf("There are %d odd numbers between %d and %d\n", odd, i, e);
    printf("There are %d evem numbers between %d and %d\n", even, i, e);
    printf("The sum of the even numbers between %d and %d is %d", i, e, sum);
    getch();
    return 0;
}
