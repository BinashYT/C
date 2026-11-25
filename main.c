#include <stdio.h>
int main(void){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter value %d: ", (i+1));
        scanf("%d", &arr[i]);
    }

    int sum=0;
    for(int j=0;j<n;j++){
        sum=sum+arr[j];
    }

    printf("The sum of the array is: %d", sum);

    return 0;
}