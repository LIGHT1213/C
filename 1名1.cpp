#include <stdio.h>
int main(void)
{
    int count, five, two, one;
    double a;
    count = 0;

        scanf("%lf",&a);
        if(a>8&&a<100){
		
		for (one = a; one >1; one--) {
            for (two = 100-a; two >1; two--) {
                for (five = (100-3*a)/5; five > 1; five--) {


                    if (a == 5 * five + 2 * two + one) {
                        count++;
                        printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", five, two, one, five + two + one);
                    }

                }
            }
        }
    }
        printf("count = %d",count);



    return 0;


}
