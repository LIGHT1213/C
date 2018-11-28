#include<stdio.h>
void inputArr(int a)
{
int k[a],l,b;
for(l=1;l<=a;l++){
scanf("%d",&k[l]);


}
scanf("%d",&b);
l=1;
for(l=1;l<=a;l++){
	if(k[l]=b) {

		printf("%d",&b);
		break;

	}	
	else {
		printf("0");

}


}
}



int main()
{
int lenArr,i;
scanf("%d",&lenArr);
inputArr(lenArr);
return 0;






}
