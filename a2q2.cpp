#include<iostream>
using namespace std;

class Students{
    string Name;
    int roll;
    float cgpa;

    public:
        void addDetails(string n , int rolln , int cg){
            Name = n;
            roll = rolln;
            cgpa = cg;
        }
        void printdata(){
            cout<<"name is"<<Name<<endl;
            cout<<"roll is"<<roll<<endl;
            cout<<"cgpa is"<<cgpa<<endl;
        }

};

int main(){
    Students s;
    s.addDetails("vishnu" , 1023 , 9.55);
    s.printdata();
}