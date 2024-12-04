#include<iostream>
using namespace std;

class base{
    protected:
    int a ; int b;
    public:
    int c;
};
class derived : protected base{
    public:
    void getdata(int x , int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<a<<endl;
        cout<<b<<endl;
    }
};

int main(){
    derived obj;
    obj.getdata(10,20);
    obj.show();
    // cout<<obj.c; // gives error
    base obj2;
    // cout << obj2.c; // works fine
}