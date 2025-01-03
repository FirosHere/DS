#include<stdio.h>
void main()
{
 int num,reversed=0;
 printf("Enter a number:\n");
 scanf("%d",&num);
 while(num!=0){
     reversed=reversed*10+num % 10;
     num/=10;
  }
 printf("Reversed Number =%d \n",reversed);

}
