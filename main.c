#include <stdio.h>
int main(void){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter the value for %d, %d: ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    int sum=0;
    printf("The sum of the array is: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          sum=sum+arr[i][j];
        }
    }

    printf("The sum of the array is: %d", sum);

    return 0;
}