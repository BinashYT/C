#include <stdio.h>
#include <string.h>
int main(void){
    int n;
    printf("Enter quantity of inputs: ");
    scanf("%d", &n);

    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter number %d: ", (i+1));
        scanf("%d", &arr[i]);
    }
    int a=0;
    for(int j=0;j<n;j++){
        if(arr[j]%2 != 0){
            printf("The number %d is odd!\n", (j+1));
            a++;
        }
    }

    if(a>0){
        printf("Hence, there are %d odd numbers!", a);
    }
    else{
        printf("Hence, there are no odd numbers!");
    }

    return 0;
}