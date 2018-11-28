#include<stdio.h>
int main()
{
  char t[9];
  int i,a=0,b=0,c=0,d=0;
 for(i=0;i<=9;i++){
    t[i]=getchar();
    if(t[i]>='a'&&t[i]<='z'||t[i]>='A'&&t[i]<='Z'){
      
      a++;
      
}
	else if(t[i]==' '||t[i]=='\n')
	{
	  b++;
      
  }
    else if(t[i]>='0'&&t[i]<='9')
	{
      c++;
      
  }
    else {
      d++;
      
      
    }
  }
 
      
       printf("letter = %d, blank = %d, digit = %d, other = %d",a,b,c,d);
       return 0;
    }
   
 
 
