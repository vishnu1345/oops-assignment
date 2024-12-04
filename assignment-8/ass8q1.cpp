#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter a"<<endl;
    cin>>a;
    int b;
    cout<<"enter b"<<endl;
    cin>>b;

    try
    {
        if(b==0){
            throw 0;
        }
        else cout<<"result is "<<(a/b)<<endl;
    }
    catch(int x)
    {
        cout<<"divided by"<<x<<"error occured"<<endl;
    }
    
}