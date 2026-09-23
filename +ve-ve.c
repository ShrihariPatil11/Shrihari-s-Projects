#include<stdio.h>
int main()
{
int num;
printf("Enter Your Number:");
scanf("%d" ,&num);
if( num>0)
printf("+ve Number \n");
else if(num < 0)
printf("-ve Number \n");
else
printf("Number is 0 \n");
return 0;
}
