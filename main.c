#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
    int op, i;
    int n[100];
    char sign[100];
    printf("\t\t\t\t Welcome to Calculator!\n");
    printf("Enter the number of operations to be performed: ");
    scanf("%d", &op);
    if(op<=0){
        printf("Please enter a valid integer value to perform operations on.");
        exit(2);
    }
    for(i=1; i<=op; i++){
        printf("Enter the number: ");
        scanf("%d", &n[i]);
        printf("Enter the respective operational sign(+,-,*,/): ");
        scanf(" %c", &sign[i]);
        printf("Enter the number: ");
        scanf("%d", &n[i+1]);
    }

    for(i=1;i<=op;i++){
        
    }
}
