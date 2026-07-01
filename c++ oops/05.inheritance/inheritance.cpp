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
class studentAdd: public student{
    public:
    int rollno;
    studentAdd(string name,int age,int rollno) : student( name, age){
        this->rollno=rollno;
    }
    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"rollno: "<<rollno<<endl;
    }
};


int main(){
    studentAdd s1("ritwik",22,34);
    s1.getInfo();

    return 0;
}