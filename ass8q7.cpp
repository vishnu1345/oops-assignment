#include<iostream>
using namespace std;

template<class T>
class test{
    T a;

    public:
    test(T x){
        a = x;
    }

    void divideby2(){
        cout<<a/2.0<<endl;
    }
};

int main(){
    test<int> intobj(10);
    intobj.divideby2();

    test<float> flobj(40.2);
    flobj.divideby2();


}