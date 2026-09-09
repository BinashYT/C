#include <stdio.h>
int main(){
    int n;
    printf("Enter the total numbers to be compared: ");
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        printf("Enter number %d: ",(i+1));
        scanf("%d", &num[i]);
    }
    int great = num[0], least = num[0];
    for(int j=1;j<n;j++){
        if(num[j]>great){
            great = num[j];
        }
        if(num[j]<least){
            least = num[j];
        }
    }
    for(int a=1;a<=15;a++){
        printf("-");
    }
    printf("\n");
    printf("The greatest number is %d\n", great);
    printf("The smallest number is %d", least);
    getchar();
    getchar();
    return 0;
}