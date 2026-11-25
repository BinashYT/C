#include <stdio.h>
int main(void){
    int arr[10];
    for(int i=0;i<10;i++){
        printf("Enter value %d: ", (i+1));
        scanf("%d", &arr[i]);
    }

    int temp;
    for(int i=0;i<9;i++){
        for(int j=0;j<9-i;j++){
            if(arr[j+1] > arr[j]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }   
    }

    for(int k=0;k<10;k++){
        printf("%d ", arr[k]);
    }

    return 0;
}