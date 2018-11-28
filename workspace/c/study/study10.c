#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d;
scanf("%d%d%d",&a,&b,&c);
d=pow(b,2)-4*a*c;
if(a==0,b==0,c==0){
	printf("参数都为零，方程无意义!\n");


}
else if(a==0,b==0&&c!=0){
	printf("a和b为0，c不为0，方程不成立\n");



}
else if(b*b-4*a*c<0){
	printf("该方程无解");


}

else{
printf("x1 = %0.2f\n", (-b+sqrt(d))/(2*a));
printf("x2 = %0.2f\n", (-b-sqrt(d))/(2*a));





}

return 0;

}
