#include<stdio.h>
int main(){
int a=0,b=0,c=0,d;
d=++a||++b&&++c;
printf("%d %d %d %d ",a,b,c,d);
} 
