#include<stdio.h>

void DisplayTable(int iValue){
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1;iCnt <= 10; iCnt++){
        printf("%d\n",iCnt*iValue);
    }
}

int main(){

    int i = 0;

    printf("Enter number to see table : \n");
    scanf("%d",&i);
    
    DisplayTable(i);

    return 0;
}