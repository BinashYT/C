#include <stdio.h>
int main(){
    int n;
    printf("Enter the total number of subjects: ");
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        printf("Enter the marks of subject %d: ",(i+1));
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
    int total;
    for(int m=0;m<n;m++){
        total += num[m];
    }
    int avg = total/n;
    for(int a=1;a<=15;a++){
        printf("-");
    }
    printf("\n");
    printf("The maximum marks is %d\n", great);
    printf("The minimum marks is %d\n", least);
    printf("The average marks is %d\n", avg);
    getchar();
    getchar();
    return 0;
}