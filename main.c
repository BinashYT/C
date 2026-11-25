#include <stdio.h>
int main(void){
    int a[10];
    for (int i=1; i<=10; i++){
        printf("Enter the age of employee %d: ", i);
        scanf("%d", &a[i]);
    }

    for(int k=0;k<=20;k++){
        printf("-");
    }
    printf("\n");

    for (int j=1;j<=10;j++){
        if(a[j] < 35){
            printf("Employee %d meets the given criteria!\n", j);
        }
    }
}