
//////////////////////////////////////////////////
//
// File name :   Program4.c
// Description : Accepting Two Number and display first number in second number
// Author :      Mahesh Shashikant Lahoti
// Date :        11/05/2025
//
//////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo,int iFrequency)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iFrequency; iCnt++)
    {
        printf("%d",iNo);
    }
    
}

int main()
{
    int iValue = 0;
    int iCnt = 0;
    

    printf("Enter Frequency :\n");
    scanf("%d",&iValue);
   
    printf("Enter Number :\n");
    scanf("%d",&iCnt);


     Display(iValue,iCnt);
    
    return 0;
}