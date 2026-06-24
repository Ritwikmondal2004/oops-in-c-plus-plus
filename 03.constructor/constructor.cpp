#include<bits/stdc++.h>
using namespace std;

class Teacher{
private:
    float salary;

public:
//non-parameter
    Teacher(){
        dept="computer science";
    }

public:
//parameterized
    Teacher(string n,string d, string s, double sal){
        name=n;
        dept=d;
        subject=s;
        salary=sal;
    }
    string name;
    string dept;
    string subject;
    void changeDept(string newDep){
        dept=newDep;
    }

    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"subject: "<<subject<<endl;
    }
};

int main(){

Teacher t1("ritwik","cse","c++",2500);
t1.getInfo();


    return 0;
}