#include<iostream>
using namespace std;

class Rectangle{
    int width;
    int height;

    public:
    void getdata(int a , int b){
        width = a;
        height = b;
    }

    void calculate(){
        cout<<width*height;
    }
};

int main(){
    Rectangle r1;
    r1.getdata(10,2);
    r1.calculate();
}