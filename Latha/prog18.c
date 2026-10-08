#include<stdio.h>
int main()
{ 
 int rate,discount,totalprice;
 printf("Enter the rate:");
 scanf("%d",&rate);
 
 discount=(50/100)*100;
 totalprice=rate-discount;
 printf("Total price:%d",totalprice);
 return 0;
}
