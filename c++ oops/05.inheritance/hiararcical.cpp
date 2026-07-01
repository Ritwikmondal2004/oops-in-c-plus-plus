#include<bits/stdc++.h>
using namespace std;

class student{
public:
    string name;
    int age;
    public:
    student(string name,int age){
        this->name=name;
        this->age=age;
    }
};
//inheritance
class Class: public student{
    public:
    int rollno;
    Class(string name,int age,int rollno) : student( name, age){
        this->rollno=rollno;
    }

};
//hiararcial-> one parent multiple child
class study:public Class{
    public:
    string subject;
    study(string name,int age, int rollno,string subject): Class(name,age,rollno){
        this->subject=subject;
    }
        void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"rollno: "<<rollno<<endl;
        cout<<"subject: "<<subject<<endl;
    }
};


int main(){
    study s1("ritwik",22,34,"oops");
    s1.getInfo();

    return 0;
}