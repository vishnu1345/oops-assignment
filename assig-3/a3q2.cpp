#include<iostream>
using namespace std;

class B;

class A{
    int x;
    public:
    void set(int a){
        x=a;
    }
    void show(){
        cout<<x<<endl;
    }

    friend void swap(class A , class B);
};

class B{
    int y;
    public:
    void set(int a){
        y=a;
    }
    void show(){
        cout<<y<<endl;
    }

    friend void swap(A obj1 , B obj2);
};

void swap(A obj1 , B obj2){
    int temp = obj1.x;
    obj1.x = obj2.y;
    obj2.y = temp;
}

int main(){
    A a;
    A b;
    cout<<"before swapping ";
    a.set(10);
    b.set(20);
    a.show();
    b.show();

    swap(a , b);
    cout<<"after swapping ";
    a.show();
    b.show();
}