#include<stdio.h>

void DisplayEvenFactors(int iValue){
    int i = 0;
    printf("Even Factors Are : \n");

    for(i=1; i<= iValue/2;i++){
        if(iValue % i == 0){
            if(i % 2 == 0){
                printf("%d\t",i);
            }
        }
    }

}

int main(){
   int iNo = 0;
   printf("Enter a number: ");
   scanf("%d",&iNo);

   DisplayEvenFactors(iNo);

   return 0;
}