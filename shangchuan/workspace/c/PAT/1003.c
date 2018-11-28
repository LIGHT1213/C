#include <stdio.h>
int main()
{
    char s;
    int count;
    scanf("%d", &count);
    getchar();
    for (int i = 0; i < count; i++)
    {
        int index = 0;
        int number[4] = {0, 0, 0, 0};
        while ((s = getchar()) != '\n')
        {
            switch (s)
            {
            case 'A':
                number[index]++;
                break;
            case 'P':
                index == 0 ? index++ : number[3]++;
                break;
            case 'T':
                index == 1 ? index++ : number[3]++;
                break;
            default:
                number[3]++;
                break;
            }
        }
        if (index == 2 && number[2] == number[1] * number[0] && number[1] > 0 && number[3] == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}