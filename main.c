#include <stdio.h>
int main(){
    char name[10][100];
    for(int i=0;i<10;i++){
        printf("Enter the name of student %d: ", (i+1));
        scanf("%s", name[i]);
    }
    for(int a=1;a<=15;a++){
        printf("-");
    }
    printf("\n");
    printf("The list of students whose name starts with letter \"R\"\n");
    for(int j=0;j<10;j++){
        char temp = *name[j];
        if(temp == 'r' || temp == 'R'){
            printf("%s\n", name[j]);
        }
    }
    getchar();
    getchar();
    return 0;
}