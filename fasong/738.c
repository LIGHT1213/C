#include<stdio.h>

int main()
{
    char c[81];
    int i=0,j;
    while(c[i-1]!='#'){
        c[i]=getchar();
        i++;
    }
    for(j=0;j<i;j++){
        if(c[j]>='a'&&c[j]<='z'){
            c[j]=c[j]-32;
        }
        else if(c[j]>='A'&&c[j]<='Z'){
            c[j]=c[j]+32;
        }
        if(c[j]!='#') 
		putchar(c[j]);
    }

    return 0;
}

