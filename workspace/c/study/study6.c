#include<stdio.h>

int fen(int a,int b)
{
int c;
int he=1;
for(c=1;c<=b;c++){
	he=he*a;





}




return he;



}



int main()
{
int x,y,z,k;
scanf("%d%d",&x,&y);

for(z=1;z<=y;z++){
	k=fen(x,z);
	printf("pow(%d,%d)=%d\n",x,z,k);





}

return 0;








}
