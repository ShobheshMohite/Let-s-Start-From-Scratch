#include<stdio.h>
#include<stdbool.h>

int Palindrome(int iValue){
    int iRev = 0,iDigit = 0;
    int iTemp = iValue;
    if(iValue < 0){
        iValue = -iValue;
    }
    while (iValue != 0)
    {
        iDigit = iValue % 10;
        iRev = (iRev * 10) + iDigit;
        iValue = iValue / 10;
    }
    if( iRev == iTemp ){
        return true;
    } else {
        return false;
    }
}

int main(){
   int iNo = 0;
   int iRet = 0;

   printf("Enter a number: ");
   scanf("%d",&iNo);

    iRet = Palindrome(iNo);
    if(iRet == true)
    {
        printf("\nThe Number is palindrome");
    }
    else
    {
        printf("\nThe Number is not palindrome");
    }
    
    

   return 0;
}