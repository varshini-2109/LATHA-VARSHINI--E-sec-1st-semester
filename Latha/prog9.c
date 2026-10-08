#include<stdio.h>
int main()
{
  int p,n,r,simple_interest;
  
    printf("Enter the value of principle:");
    scanf("%d",&p);
    
    printf("Enter the number of years:");
    scanf("%d",&n);
    
    printf("Enter the rate of interest:");
    scanf("%d",&r);
    
 simple_interest=p*n*r;
    printf("Simple_interest:%d",simple_interest);
 return 0;
}
