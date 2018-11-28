#include <stdio.h>
void min(int n);
int main()
{
    int n;
    scanf("%d", &n);
    min(n);
}
void min(int n)
{
    int i, k, arr[n];
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = n - 1; i >= 0; i--)
    {
        for (k = 1; k <= i; k++)
        {
            int temp;
            if (arr[k] > arr[k + 1])
            {
                temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d\n", arr[i]);
    }
}