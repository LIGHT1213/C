#include <stdio.h>
int ss(int n);
void shuzu(int x, int n);
int main()
{
    int n, c = 0;
    scanf("%d", &n);
    c = ss(n);
    shuzu(c, n);
    return 0;
}
int ss(int n)
{
    int i, k, c = 0, a = 0;
    for (i = n; i > 1; i--)
    {
        c = 0;
        for (k = 2; k <= i; k++)
        {

            if (i % k == 0 && k != 1 && k != i)
            {
                c++;
            }
        }
        if (c == 0)
            a++;
    }
    return a;
}
void shuzu(int x, int n)
{
    int i, k, c = 0, a, t;
    int arr[c];
    for (i = n; i > 1; i--)
    {
        c = 0;
        for (k = 2; k <= i; k++)
        {

            if (i % k == 0 && k != 1 && k != i)
            {
                c++;
            }
        }
        if (c == 0)
        {
            for (a = 1; a <= x; i++)
            {
                arr[a] = i;
            }
        }
    }
    for (a = 1; a < x; a++)
    {
        if (arr[a] - arr[a + 1] == 2 || arr[a + 1] - arr[a] == 2)
            t++;
    }
    printf("%d", t);
}
