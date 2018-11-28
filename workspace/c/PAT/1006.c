int main()
{
    int n, a, b, c, i;
    scanf("%d", &n);
    a = n / 100;
    b = (n % 100) / 10;
    c = n % 10;
    if (a > 0)
    {
        for (i = 0; i < a; i++)
        {
            printf("B");
        }
    }
    if (b > 0)
    {
        for (i = 0; i < b; i++)
        {
            printf("S");
        }
    }
    if (c > 0)
    {
        for (i = 1; i <= c; i++)
        {
            printf("%d", i);
        }
    }
    return 0;
}