#include<iostream>
using namespace std;

class test{
    int x;
    int y;

    public:
    void setval(int x , int y){
        this->x = x;
        this->y = y;
    }

    void show(){
        cout<<"x is "<<x<<endl;
        cout<<"y is "<<y<<endl;
    }
};

int main(){
    test t1;
    t1.setval(10,20);
    t1.show();

    test *ptr = &t1;
    ptr->setval(30,40);
    ptr->show();
}