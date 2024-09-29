#include<iostream>
using namespace std;

// int x = 100;

// int main(){
//     int x = 10;
//     cout<<x<<endl;
//     cout<<::x<<endl;
// }


// class test{
//     public:
//     test(){
//         cout<<"in constructor"<<endl;
//     }

//     ~test(){
//         cout<<"in destructor"<<endl;
//     }
// };

// int main(){
//     cout<<"in main"<<endl;
//     test c;

// }


class X{
    static int i;
    int k;
    public:
    void show(){
        cout<<i<<endl;
    }
    void setk(int num){
        k=num;
    }
    void display(){
        cout<<k<<endl;
    }
};

int X::i = 10;

int main(){
    X a,b;
    a.show();

    b.show();

    a.setk(12);
    a.display();

    b.display();
}