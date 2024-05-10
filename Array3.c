#include<stdio.h>
#include<stdlib.h>

int Summation(int Data[],int iSize){

    int iCnt = 0,iSum = 0;
    for(iCnt=0;iCnt < iSize ; iCnt++){
        iSum += Data[iCnt];
    }
    return iSum;

}

int main(){
    int *ptr = NULL;
    int iCnt = 0,iRet = 0,iLength = 0;

    printf("Enter The Length Of Elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter The Elements : \n");

    for(iCnt = 0;iCnt < iLength ; iCnt++){
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements Are : \n");

    for(iCnt = 0;iCnt < iLength; iCnt++){
        printf("%d\n",ptr[iCnt]);
    }

    iRet = Summation(ptr,5);
    printf("\nSum Of All Element Is %d ",iRet);

    return 0;

}