#include <stdio.h>
int main(void){
    int arr[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("Enter the value for %d, %d: ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("The transpose of the array is: \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}