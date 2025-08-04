///////////////////////////////////////////////////
//
// File Name : Program5.c
// Description : Find Character is vowel or not
// Author : Mahesh Shashikant Lahoti
// Date :   12/05/2025
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

# define True 0 
# define False 1 

bool ChkVowel(char ch)
{
    if((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U') || (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
    {
        return True;
    }
    else
    {
        return False;
    }
}
int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter Character to check it is Vowel or Not :");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);
     
    if(bRet == True)
    {
        printf("Number is Vowel ");
    }
    else
    {
        printf("Number is not Vowel ");
    }

    
    return 0;
}