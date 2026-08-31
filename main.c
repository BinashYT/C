#include <stdio.h>
int main(){
    int i=11, odd=0, even=0;
    while(i<=224){
        if(i%2 == 0){
            even++;
        }
        else{
            odd++;
        }
        i++;
    }
    printf("There are %d odd numbers between 11 and 224\n", odd );
    printf("There are %d even numbers between 11 and 224\n", even );
    return 0;
}