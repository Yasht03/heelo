#include<stdio.h>
int main(void){
int a,b;
scanf("%d",&a);
scanf("%d",&b);
int i=1;
int mini=min(a,b);
while(i<mini){
if(a%i ==0&& b%i==0)
{
x++;}
}
printf("%d",x);
}

