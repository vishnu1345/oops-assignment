#include<iostream>
using namespace std;

class ok{
    int a ;
    int b;

    public:
    void setdata(int x , int y);

    void show(){
        cout<<a<<endl;
        cout<<b<<endl;
    }
};

void ok::setdata(int x , int y){
    a=x;
    b=y;
}

int main(){
    ok obj;
    obj.setdata(10,20);
    obj.show();
}
