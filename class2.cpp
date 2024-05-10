#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        float f;
        double d;

    void fun(int A){
        cout<<"inside fun\n";
        cout<<this->i<<"\n";
        cout<<A<<"\n";
    }

    void gun(int A,int B){
        cout<<"Inside gun \n";
    }

};

int main(){
    Demo dobj1;
    Demo dobj2;

    dobj1.i = 101;
    dobj2.i = 201;

    dobj1.fun(11);
    dobj2.fun(11);

    return 0;
}

