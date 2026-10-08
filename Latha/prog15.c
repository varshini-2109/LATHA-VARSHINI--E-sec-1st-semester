#include<stdio.h>
int main()
{
  int a,b,c,total,average;
  
    printf("Enter three integers:");
    scanf("%d %d %d",&a,&b,&c);
    
 total=a+b+c;
 
 average=total/3;
 
    printf("Average:%d",average);
 return 0;
 }
