#include<stdio.h>
int main(){
	int five,two,one,num,cnt=0;
	scanf("%d",&num);
	for(five=num/5;five>0;--five){
		for(two=(num-five*5)/2;two>0;--two){
			one=num-two*2-five*5;
			if(one!=0){
				printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",five,two,one,five+two+one);
				cnt++;
			}
		}
	}
	printf("count = %d",cnt);
	return 0;
}
/*
#include <stdio.h>
int main(void) {
    int count, five, two, one,num;
    count = 0;
    scanf("%d", &num);

    for (five = num / 5; five > 0; --five) {
        for (two = (num - 5 * five) / 2; two > 0; --two) {
            one = num - 5 * five - 2 * two;
            if (one != 0) {
                count++;
                printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", five, two, one, five + two + one);
            }
        }
    }
    printf("count = %d", count);

    return 0;
}*/
