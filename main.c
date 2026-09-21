#include <stdio.h>
#include <string.h>
int main(){
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    char name[n][25];
    
    for(int i=0;i<n;i++){
        printf("Enter the name of student %d: ", (i+1));
        scanf(" %[^\n]", name[i]);
    }

    for(int j=0;j<n;j++){
        if(strlen(name[j]) > 8){
            printf("The name %s contains more than 8 characters(including white spaces)\n", name[j]);
        }
    }
    return 0;
}