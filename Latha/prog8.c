#include<stdio.h>
int main()
{
    int m,p,e,total;
    float average;
    
    printf("Enter maths mark:");
    scanf("%d",&m);
    
    printf("Enter physics marks:");
    scanf("%d",&p);
    
    printf("Enter electronics mark:");
    scanf("%d",&e);
    
    total=m+p+e;
    printf("Total:%d\n",total);
    
    average=total/3;
    printf("Average marks:%.2f",average);
 return 0;
}
