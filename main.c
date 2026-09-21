#include <stdio.h>
#include <string.h>
int main(){
    char name[3][15] = {
        {"Mohan"},
        {"Sohan"},
        {"Rohan"}
    };
    char temp[15];
    for(int i=0;i<2;i++){
        for(int j=(i+1);j<3;j++){
            if(strcmp(name[i], name[j])>0){
                strcpy(temp, name[j]);
                strcpy(name[j], name[i]);
                strcpy(name[i], temp);
            }
        }
    }

    for(int a=0;a<3;a++){
        printf("%s\n", name[a]);
    }
    return 0;
}