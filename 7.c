#include<stdio.h>
#include<stdbool.h>

bool DivisivleBy5And3(int iNo){
    if((iNo % 5 == 0) && (iNo % 3 == 0)){
        return true;
    }
    else
    {
        return false;
    }
}

int main(){
    int iNo = 0;
    bool iRet = false;

    printf("Enter Number To Check : \n");
    scanf("%d",&iNo);

    iRet = DivisivleBy5And3(iNo);

    if(iRet == true){
        printf("Entered Number is divisible by 5 & 3\n");
    } else {
        printf("Entered Number is not divisible by 5 & 3\n");
    }

    return 0;
}