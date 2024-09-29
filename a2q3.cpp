#include<iostream>
using namespace std;

class test{
    void privatef(){
        cout<<"I am private member func"<<endl;
    }

    public:
    void publicf(){
        cout<<"I am public member func"<<endl;
        privatef();
    }
};

int main(){
    test t1;
    t1.publicf();
    // t1.privatef();
}