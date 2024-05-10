#include<stdio.h>

int Summation(int Data[],int iSize){

    int iCnt = 0,iSum = 0;
    for(iCnt=0;iCnt < iSize ; iCnt++){
        iSum += Data[iCnt];
    }
    return iSum;

}

int main(){
    int Arr[5];
    int iCnt = 0,iRet = 0;

    printf("Enter The Elements : \n");

    for(iCnt = 0;iCnt < 5 ; iCnt++){
        scanf("%d",&Arr[iCnt]);
    }

    printf("Elements Are : \n");

    for(iCnt = 0;iCnt < 5; iCnt++){
        printf("%d\n",Arr[iCnt]);
    }

    iRet = Summation(Arr,5);
    printf("\nSum Of All Element Is %d ",iRet);

    return 0;

}