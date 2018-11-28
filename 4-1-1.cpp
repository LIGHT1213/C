#include <stdio.h>
int yueshu(int a, int b);
int beishu(int a, int b);
int main()
{
    int i, j, minb, maxy;
    scanf("%d%d", &i, &j);
    minb = beishu(i, j);
    maxy = yueshu(i, j);
    printf("%d %d", maxy, minb);
}
int yueshu(int a, int b)
{
    int i = 1, flag = 1;
    if (a > b)
    {
        for (i = 1; i <= b; i++)
        {
            if (a % i == 0 && b % i == 0)
                flag = i;
        }
    }
    else if (a < b)
    {
        for (i = 1; i <= a; i++)
        {
            if (a % i == 0 && b % i == 0)
                flag = i;
        }
    }
    else
    {
        flag = a;
    }
    return flag;
}
int beishu(int a, int b)
{
    int temp, i;
    if (a > b)
    {
        temp = a;
        for (i = a; i <= a * b; i++)
        {
            if (i % b == 0 && i % a == 0)
            {
                temp = i;
                break;
            }
        }
    }

    else if (a < b)
    {
        temp = b;
        for (i = b; i <= a * b; i++)
        {
            if (i % a == 0 && i % b == 0)
            {
                temp = i;
                break;
            }
        }
    }
    else
    {
        temp = a;
    }
    return temp;
}

