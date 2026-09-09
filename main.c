#include <stdio.h>
int main(){
    int n;
    printf("Enter the total numbers: ");
    scanf("%d", &n);
    int num[n];
    for(int i=0;i<n;i++){
        printf("Enter number %d: ", (i+1));
        scanf("%d", &num[i]);
    }
    for(int j=0;j<n;j++){
        for(int a=j;a<n;a++){
            if(num[a]<num[j]){
                int temp = num[j];
                num[j] = num[a];
                num[a] = temp;
            }
        }
    }
    printf("The numbers in ascending order is: ");
    for(int b=0;b<n;b++){
        printf("\n%d", num[b]);
    }
    getchar();
    getchar();
    return 0;
}