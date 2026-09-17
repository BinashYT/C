#include <stdio.h>
int main()
{
    int n[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the element %d of column %d: ", (j + 1), (i + 1));
            scanf("%d", &n[i][j]);
        }
    }
    for (int q = 0; q <= 15; q++)
    {
        printf("-");
    }
    printf("\n");

for(int r=0;r<2;r++){
    for(int s=0;s<3;s++){
        printf("%d\t", n[r][s]);
    }
    printf("\n");
}
    for (int q = 0; q <= 15; q++)
    {
    printf("-");
}
printf("\n");
int sum = 0;
for (int a = 0; a < 3; a++)
{
    for (int b = 0; b < 2; b++)
    {
        sum += n[b][a];
    }
    printf("Sum of all the elements of column %d of the matrix is: %d\n ", (a+1), sum);
}
getchar();
getchar();
return 0;
}
