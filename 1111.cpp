#include <stdio.h>
int main(void)
{
    int count, five, two, one;
    double a;
    scanf("%lf",&a);

    count = 0;
    if(a > 8 && a < 100) {
        for (five = 1; five < a/5; five++) {
            for (two = 1; two < a/2; two++) {
                for (one = 1; one < a; one++) {
                  if (5 * five + 2 * two + one == a) {
                  printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", five, two, one, five + two + one);
                        count++;
                      
                    }

                }
            }
            
        }
        printf("count = %d",count);
        
    }


    return 0;


}

