#include<iostream>
using namespace std;

class Maths
{
    public:
        int iNo1;
        int iNo2;

    Maths(){
        cout<<"inside default constructor\n";
        iNo1 = 0;
        iNo2 = 0;
    }
    Maths(int A,int B){
        cout<<"inside parameterized constructor \n";
        iNo1=A;
        iNo2=B;
    }
    ~Maths(){
        cout<<"Inside Destructor\n";
    }
    int Addition(){
        return iNo1 + iNo2;
    }
};

int main(){
    cout<<"Inside Main \n";

    Maths mobj1;
    Maths mobj2(11,10);

    int iRet = 0;
    cout<<"----------------------------------------\n";
    iRet = mobj2.Addition();

    cout<<"Addition is :" << iRet <<"\n";

    return 0;
}

