#include <stdio.h>

void pyramid( int n );

int main()
{    
    int n;

    scanf("%d", &n);
    pyramid(n);

    return 0;
}
void pyramid( int n ){
          
int i,k,j;
            
for(i=1;i<=n;i++){
                        
for(k=1;k<=n-i;k++){
printf(" ");

}
for(j=1;j<=i;j++){
if(j!=i) printf("%d ",i);

else printf("%d\n",i);
                      }
					  } 
}
