#include<stdio.h>

void DisplayFactors(int iValue){
    int iCnt = 0;
    printf("Factora are: \n");

    for(iCnt = 1;iCnt < iValue;iCnt++){
        if(iValue % iCnt == 0){
            printf("%d\n",iCnt);
        }
    }
}

int main(){

    int i = 0;

    printf("Enter number see : \n");
    scanf("%d",&i);
    
    DisplayFactors(i);

    return 0;
}