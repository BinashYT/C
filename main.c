#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    if (num % 2 == 0){
        printf("The given number is even");
    }
    else{
        printf("The number is odd");
    }
    return 0;
}