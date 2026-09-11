#include <stdio.h>
int main()
{
    int n[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int g[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int e[2][3];
    for (int a = 0; a < 2; a++)
    {
        for (int b = 0; b < 3; b++)
        {
            e[a][b] = n[a][b] + g[a][b];
        }
    }
    for (int a = 0; a < 2; a++)
    {
        for (int b = 0; b < 3; b++)
        {
            printf("%d\t", e[a][b]);
        }
    }
}