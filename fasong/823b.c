#include <stdio.h>
#include <string.h>
#include <math.h>
#define N 10
#define M 4

int main()
{
    int i, j, k = 0, len1 = 0;
    char att[M][N];
    char ch;
    int lpc[M] = {0};

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < 8; j++)
        {
            ch = getchar();
            att[i][j] = ch;
        }
    }
    for (i = 0; i < M; i++)
    {
        k = 0;
        for (j = 8; j > 0; j--)
        {
            lpc[i] += (att[i][j - 1] - 48) * pow(2, k);
            k++;
        }
    }
    for (i = 0; i < M; i++)
    {
        printf("%d", lpc[i]);
        if (i != 3)
        {
            printf(".");
        }
    }
    printf("\n");
    return 0;
}
