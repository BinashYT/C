#include <stdio.h>
#include <string.h>
int main()
{
    printf("Enter the number of students: ");
    int n;
    scanf("%d", &n);
    char name[n][25];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of student %d: ", (i + 1));
        scanf(" %[^\n]", name[i]);
    }
    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = 0; j < (n - 1); j++)
        {
            char temp[25];
            strcpy(temp, name[j]);
            if (strcmp(name[j], name[j + 1]) > 0)
            {
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], temp);
            }
        }
    }
    printf("The sorted array of names of the students is: \n");
    for (int a = 0; a < n; a++)
    {
        printf("%s\n", name[a]);
    }
}