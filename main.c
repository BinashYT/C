#include <stdio.h>
int main(void){
    int n;
    printf("Enter the total number of students: ");
    scanf("%d", &n);

    int marks[n];
    for(int i=0;i<n;i++){
        printf("Enter the mark for student %d: ", (i+1));
        scanf("%d", &marks[i]);
    }

    int sum=0;
    for(int j=0;j<n;j++){
        sum=sum+marks[j];
    }

    int avg = sum/n;

    int count=0;
    for(int k=0;k<n;k++){
        if(marks[k]>avg){
            count++;
        }
    }

    printf("%d students have scored more than average!", count);

    return 0;
}