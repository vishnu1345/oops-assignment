#include<iostream>
using namespace std;

namespace ns1{
    int x = 5;
}

namespace ns2{
    int x = 10;
}

int main(){
    cout<<ns1::x;
    cout<<ns2::x;
}