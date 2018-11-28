#include <stdio.h>
int main()
{
    int a, b = 0, c = 0;
    scanf("%d", &a);
    while (a != 0)
    {
        b += a % 10;
        c++;
    }
    printf("%d,%d", b, c);
    return 0;
}
