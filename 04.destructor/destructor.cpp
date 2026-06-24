#include<bits/stdc++.h>
using namespace std;

class student
{
    string name;
    double* cgpaptr;
public:
    student(string name, double cgpa){
        this->name=name;
        cgpaptr=new double;
        *cgpaptr=cgpa;
    }
    //destructor
    ~student(){
        cout<<"delete destructor";
        delete cgpaptr;
    }
    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"cgpa: "<<*cgpaptr<<endl;
    }
};


int main(){

string name="ritwik";
double cgpa=98.6;

    student s(name, cgpa);
    s.getInfo();

    return 0;
}