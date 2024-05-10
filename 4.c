#include<stdio.h>

int AddOfTwoNo(int iNo1,int iNo2){
    int iAns = 0;
    
    iAns = iNo1 + iNo2;
    return iAns;
}


int main(){
    int i = 0,j = 0,iRet = 0;
    
    printf("Enter First Number : \n");
    scanf("%d",&i);

    printf("Enter Second Number : \n");
    scanf("%d",&j);

    iRet = AddOfTwoNo(i,j);

    printf("Addition is %d",iRet);
    
    return 0;
}
