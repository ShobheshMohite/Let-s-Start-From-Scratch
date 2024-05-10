#include<stdio.h>

int CountDigits(int iValue){
    int iCount = 0;
    int iDigit = 0;
    while(iValue != 0){
        iDigit = iValue % 10;
        iValue = iValue / 10;
        iCount++;   
    }

    return iCount;
}

int main(){
   int iValue = 0;
   int iNo = 0;

   printf("Enter a number: ");
   scanf("%d",&iValue);

   iNo = CountDigits(iValue);
   printf("Number of digits in number are : %d",iNo);

   return 0;
}