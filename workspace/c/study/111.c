#include <stdio.h>
int main(void)
{
    int gcd, lcm, m, n;
    int repeat, ri;
    scanf("%d", &repeat);
    for (ri = 1; ri <= repeat; ri++)
    {
        scanf("%d", &m);
        scanf("%d", &n);
        if (m <= 0 || n <= 0)
            printf("m <= 0 or n <= 0");
        else
        {

            for (lcm = m; lcm % n != 0; lcm = lcm + m)
         gcd = m * n / lcm;
        }
        printf(); 
        return 0;
    }