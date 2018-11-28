#include<stdio.h>
int chengji(int c)

{
int a;
int zonghe=1;
for(a=1;a<=c;a++){
	zonghe=zonghe*a;




}



return zonghe;
}








int main()
{
int he,x,y;
scanf("%d%d",&x,&y);
he=chengji(x)+chengji(y);
printf("%d\n",he);

return 0;

}










