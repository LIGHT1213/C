#include<stdio.h>
int main()
{
char c;
int blank, digit, i, letter, other;
c=getchar();
for(i=1;i<10;i++){
if(c>"a"&&c<"z"||c>"A"&&c<"Z") letter++;
else if(c==" "||c=="\n") blank++;
else if(c>"1"&&c<"9") digit++;
else other;
}

return 0;



}
