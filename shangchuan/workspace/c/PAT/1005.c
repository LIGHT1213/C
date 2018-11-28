#include <stdio.h>
void input(int i)
{
    int a, b, arr[i], n[i],k;
    for (a = 0; a <= i - 1; a++)
    {
        scanf("%d", &arr[a]);
        n[a] = arr[a];
    }

    for (a = 0; a <= i - 1; a++)
    {

        while (arr[a] != 1 && arr[a] != 0)
        {
            if (arr[a] % 2 != 0)
            {
                arr[a] = (3 * arr[a] + 1) * 0.5;
                for (b = 0; b <= i - 1; b++)
                {
                    if (arr[a] == n[b] && b != a && arr[a] != 1)
                    {
                        arr[b] = 0;
                        break;
                    }
                }
            }
            else
            {
                arr[a] = 0.5 * arr[a];
                for (b = 0; b <= i - 1; b++)
                {
                    if (arr[a] == n[b] && b != a && arr[a] != 1)
                    {
                        arr[b] = 0;
                        break;
                    }
                }
            }
        }
    }
        
    
}
int main()
{
    int a;
    scanf("%d", &a);

    input(a);
}