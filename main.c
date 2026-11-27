#include <stdio.h>
int main(void){
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    char name[n][30];
    for(int i=0;i<n;i++){
        printf("Enter the name of student %d: ", (i+1));
        scanf(" %29[^\n]", name[i]);
    }

    for(int j=0;j<n;j++){
        char letter = *name[j];
        if(letter == 'R'|| letter == 'r'){
            printf("The name %s starts from letter R!\n", name[j]);
        }
    }

    return 0;
}