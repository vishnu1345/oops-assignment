#include<iostream>
using namespace std;

class base{
    int a ;
    int b;
    public:
    void getdata(int x , int y){
        a=x;
        b=y;
    }
    void showdata(){
        cout<<a<<endl;
        cout<<b<<endl;
    }

};
class derived : public base{
    int c;
    public:
    void getall(int x, int y , int z){
        getdata(x,y);
        c=z;
    }
    void showall(){
        showdata();
        cout<<c<<endl;
    }
};

int main(){
    derived obj,obj2;
    obj.getall(10,20,30);
    obj.showall();

    obj2.getdata(40,50);
    obj2.showdata();
}