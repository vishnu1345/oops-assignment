#include<iostream>
using namespace std;

template<class T , int size>
class test{
    public:
    void display(T x ){
        cout<<x<<size<<endl;
    }
};

int main(){
    test<int,10> obj;
    obj.display(9);

    test<float , 78> obj2;
    obj2.display(88.09);
}