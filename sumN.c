//sum of first N  numbers print
#include<stdio.h>
void main()
{
 int i=1,n,sum=0;
 printf("Enter the number limit:\n");
 scanf("%d",&n);
 while(i<=n)
 { 
    sum+=i;
    i++;
    }
   printf("Sum of first %d numbers= %d ",n,sum);
  
}
