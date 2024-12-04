#include<iostream>
using namespace std;

template<class T>
T mymax(T a , T b){
    return a>b?a:b;
}

int main(){
    cout<<mymax(10 , 7)<<endl;
    cout<<mymax(10.9 , 7.6)<<endl;
    cout<<mymax('c' , 'k')<<endl;
}

// 4th , 5th already done 