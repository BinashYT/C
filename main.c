#include <stdio.h>
int main()
{
    int n;
    printf("Enter the total number of subjects: ");
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the marks of subject %d: ", (i + 1));
        scanf("%d", &num[i]);
    }

    int total = 0;
    for (int m = 0; m < n; m++)
    {
        total += num[m];
    }
    int avg = total / n;
    for (int a = 1; a <= 15; a++)
    {
        printf("-");
    }
    printf("\n");
    printf("The average marks is %d\n", avg);
    for (int q = 1; q <= 15; q++)
    {
        printf("-");
    }
    printf("\n");
    for (int j = 0; j < n; j++)
    {
        if (num[j] > avg)
        {
            printf("%d\n", num[j]);
        }
    }
    getchar();
    getchar();
    return 0;
}