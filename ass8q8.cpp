#include<iostream>
using namespace std;

template<class T>
class test{
    T a;

    public:
    test(T x);

    T divideby2();
};
template<class T>
test<T>::test(T val){
    a = val;
}

template<class T>
T test<T>::divideby2(){
    return val/2;
}

int main(){
    test<int> intobj(10);
    intobj.divideby2();

    test<float> flobj(40.2);
    flobj.divideby2();


}