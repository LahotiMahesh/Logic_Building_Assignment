/*
Start
    Accept Number from User
    if Number is less than 50 print Small 
    if it is greater than 50 and less than 100 print medium
    if it is greater than 100 then print large
Stop
*/



#include<stdio.h>

void Number(int iNo)
{
   if(iNo < 0)
   {
     printf("INVALID_INPUT");
   }
   else if((iNo >=0) && (iNo <=50))
   {
    printf("Small\n");
   }
   else if((iNo >50) && (iNo <=100))
   {
    printf("Medium\n");
   }
   else if((iNo > 100))
   {
    printf("Large\n");
   }
}
int main()
{
   int iValue = 0;
   
   printf("Enter Number :");
   scanf("%d",&iValue);

   Number(iValue);
    return 0;
}