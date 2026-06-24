#include<bits/stdc++.h>
using namespace std;

class Teacher{
private:
    float salary;

public:
    string name;
    string dept;
    string sub;
//non-parameter
    Teacher(){
        dept="computer science";
    }

public:
//parameterized
//this constructor
    Teacher(string name,string dept, string sub, double salary){
        this->name=name;
        this->dept=dept;
        this->sub=sub;
        this->salary=salary;
    }
//copy constructor
Teacher(Teacher &orgObj){
    cout<<"i am coustom constructor"<<endl;
    this->name=orgObj.name;
    this->dept=orgObj.dept;
    this->sub=orgObj.sub;
    this->salary=orgObj.salary;
}

    void changeDept(string newDep){
        dept=newDep;
    }

    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"subject: "<<sub<<endl;
        cout<<"dept: "<<dept<<endl;
        cout<<"salary: "<<salary<<endl;
    }
};

int main(){

Teacher t1("ritwik","cse","c++",2500);
t1.getInfo();
//copy constructor
Teacher t2(t1);
t2.getInfo();


    return 0;
}