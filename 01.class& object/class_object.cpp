#include<bits/stdc++.h>
using namespace std;

class Teacher{
    private:
    float salary;
    public:
    //properties/ attribute
    string name;
    string dept;
    string subject;
    
//method
    void changeDept(string newDep){
        dept=newDep;
    }
    //setter => indirectly access private value
    void setSalary(double s){
        salary=s;
    }
    //getter=>returns the value of a private member.
    float getSalary(){
        return salary;
    }

};

int main(){

        Teacher t1;
        t1.name="himangshu";
        t1.subject="c++";
        t1.dept="cse";
        // t1.salary=320000;
        t1.setSalary(540000);
        cout<<t1.name<<endl;
        cout<<t1.subject<<endl;
        cout<<t1.dept<<endl;
        // cout<<t1.salary<<endl;
        cout<<t1.getSalary()<<endl;



    return 0;
}