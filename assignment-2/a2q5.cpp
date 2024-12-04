#include<iostream>
using namespace std;

class complex{
    float real;
    float imaginary;

    public:
    void setdata(float x , float y){
        real = x;
        imaginary = y;
    }
    void show(){
        cout<<"real no. is "<<real<<endl;
        cout<<"imaginary is "<<imaginary<<endl;
    }

    complex sum(complex c1){
        complex s;
        s.real = real + c1.real;
        s.imaginary = imaginary + c1.imaginary;
        return s;
    }
};

int main(){
    complex c1 , c2 , c3;
    c1.setdata(1.2 , 2.3);

    c2.setdata(2.2,3.3);

    c3 = c1.sum(c2);

    c3.show();
}
