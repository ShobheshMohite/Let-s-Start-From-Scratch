/*
    * * * *
    * * * *
    * * * * 
    * * * * 
*/

#include<iostream>
using namespace std;

void Display(int iValue,int jValue){
    for(int iCnt = 0; iCnt < iValue ; iCnt++){
        for(int jCnt = 0; jCnt < jValue ; jCnt++){
            cout << "* ";
        }
        cout<<"\n";
    }

}

int main(){
    int iRows = 0,iCols = 0;

    cout<<"Enter Any Number Rows :  \n";
    cin>>iRows;

    cout<<"Enter Any Number Coloumns :  \n";
    cin>>iCols;

    Display(iRows,iCols);
    return 0;
}