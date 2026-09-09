#include <stdio.h>
int main(){
    int n[100];
    for(int i=0;i<=99;i++){
        printf("Enter the salary of employee %d: ", i+1);
        scanf("%d", &n[i]);
    }
    int count = 0;
    for(int j=0;j<=99;j++){
        if(n[j]>=20000 && n[j]<=30000){
            count = count + 1;
        }
    }
    printf("There are %d employees who's salary resides between Rs. 20,000 and Rs. 30,000.",count);
}