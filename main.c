#include <stdio.h>
int main(void){
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    int mark[n];
    int a=1;

    while (a<=n){
        printf("Enter the marks of student %d: ", a);
        scanf("%d", &mark[a-1]);
        printf("\n");
        a++;
    }
    
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+mark[i];
    }

    int avg = sum/n;

    for(int k=0;k<n;k++){
        if(mark[k] >= avg){
            printf("Student %d scored above average!\n", (k+1));
        }
        else{
            printf("Student %d scored below average!\n", (k+1));
        }
    }
}