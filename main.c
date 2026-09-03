#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
    int i, a=0, b=1,c, n;
    printf("Enter the number of terms in fibonacci series: ");
    scanf("%d", &n);
    printf("%d ",a);
    printf("%d ",b);
    for(i=1;i<=n; i++){
        c=a+b;
        printf("%d ", c);
        a=b;
        b=c;
    }
    return 0;
}
