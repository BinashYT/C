#include <stdio.h>
int main(){
    int i,n;
    for(i=1;i<=5;i++){
        for(n=5;n>=i;n--){
            printf("%d ",i);
        }
        printf("\n");
    }
}