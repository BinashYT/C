#include <stdio.h>
#include <conio.h>
int main(){
    int odd=0, even=0,i;
    for (i=1;i<=100;i++){
        if(i%2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("There are %d odd numbers between 1 to 100\n", odd);
    printf("There are %d even numbers between 1 to 100", even);
    return 0;
}