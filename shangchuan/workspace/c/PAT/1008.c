#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int arr[202];
int main()
{
    int n, m, i, d;
    for(i=1;i<=202;i++){
        arr[i]=0;
    }
    scanf("%d %d", &n, &m);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    d = m % n;
    if (d == 0)
    {
        for (i = 1; i <= n; i++)
        {
            if(i!=n) printf("%d ", arr[i]);
            else printf("%d",arr[i]);
        }
    }
    else
    {
        for (i = n; i >= 1; i--)
        {
            arr[i + d] = arr[i];
        }
        for (i = n + 1; i <= n + d; i++)
        {
            
                arr[i-n] = arr[i];
            
        }
    for (i = 1; i <= n; i++)
    {
        if(i!=n) printf("%d ", arr[i]);
        else printf("%d",arr[i]);
    }
    }
    
    return 0;
}
