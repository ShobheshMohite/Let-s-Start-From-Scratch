#include<stdio.h>

void DisplayFactorsSum(int iValue){
    int iCnt = 0;
    int iSum = 0;
    printf("Factors Sum is: \n");

    for(iCnt = 1;iCnt < iValue;iCnt++){
        if(iValue % iCnt == 0){
            iSum = iSum + iCnt;
        }
    }
    printf("%d",iSum);
}

int main(){

    int i = 0;

    printf("Enter number see : \n");
    scanf("%d",&i);
    
    DisplayFactorsSum(i);

    return 0;
}