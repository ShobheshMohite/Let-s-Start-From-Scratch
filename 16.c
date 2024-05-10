#include<stdio.h>

int Reverse(int iValue){
    int iRev = 0,iDigit = 0;
    if(iValue < 0){
        iValue = -iValue;
    }
    while (iValue != 0)
    {
        iDigit = iValue % 10;
        iRev = (iRev * 10) + iDigit;
        iValue = iValue / 10;
    }
    return iRev;
    
}

int main(){
   int iNo = 0;
   int iRet = 0;

   printf("Enter a number: ");
   scanf("%d",&iNo);

    iRet = Reverse(iNo);
    printf("\nThe reversed of %d is %d.",iNo,iRet);

   return 0;
}