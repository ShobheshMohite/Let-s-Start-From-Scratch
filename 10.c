#include<stdio.h>

int Summation(int iValue){
    
    int iSum = 0;

    for(int i  = 1 ; i<= iValue ; i++)
    {
        iSum = iSum + i;
    }
    return iSum;
    
}

int main(){

    int i = 0,iRet = 0;
    printf("Enter number to sum upto : \n");
    scanf("%d",&i);

    iRet = Summation(i);
    printf("Sum Of Numbers Upto %d is %d",i,iRet);

    return 0;
}