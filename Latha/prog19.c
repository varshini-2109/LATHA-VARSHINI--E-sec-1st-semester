#include<stdio.h>
int main()
{
 int a,b,sum,difference,product,quotient,modulo;
 printf("Enter two integers:");
 scanf("%d %d",&a,&b);
 
 sum=a+b;
 difference=a-b;
 product=a*b;
 quotient=a/b;
 modulo=a%b;
 
 printf("Sum:%d\n",sum);
 printf("Difference:%d\n",difference);
 printf("Product:%d\n",product);
 printf("Quotient:%d\n",quotient);
 printf("Modulo:%d",modulo);
 return 0;
}
  
