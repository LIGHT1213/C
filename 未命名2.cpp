#include <stdio.h>
int fun ( int  n )
{   int i, y=2;
for(i=3; i<=n; i++)
    y= y * i;
    return  y;
}
int main()
{ printf("%d",fun(7)); }
