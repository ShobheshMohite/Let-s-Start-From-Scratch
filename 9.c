#include<stdio.h>

void Display(int iValue){
    
    int iCnt = 1;
    while(iCnt <= iValue)
    {
        printf("Hare Krishna\n");
        iCnt++;
    }
    
}

int main(){

    int i = 0;
    printf("Enter number of iteration : \n");
    scanf("%d",&i);

    Display(i);

    return 0;
}