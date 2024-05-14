#include<iostream>
using namespace std;

void Display(int iValue){
    for(int iCnt = 0;iCnt<iValue;iCnt++){
        cout<<"* ";
    }

}

int main(){
    int i = 0;

    cout<<"Enter Any Number To Print The Number oF * \n";
    cin>>i;

    Display(i);
    return 0;
}