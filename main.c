#include <stdio.h>
int main(){
    int i,n;
    for(i=5;i>=1;i--){
        for(n=1;n<=i;n++){
            printf("%d ",i);
        }
        printf("\n");
    }
}