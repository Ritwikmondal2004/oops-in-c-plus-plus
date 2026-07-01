#include<bits/stdc++.h>
using namespace std;

class Account{
    private:
    string name;
    string passwored; // data hiding that is encaptulation
    public:
    string studentID;
    string username;
};
int main(){

Account ac;
ac.studentID="1234";
ac.username="ritwik@234";

cout<<ac.studentID<<endl;
cout<<ac.username<<endl;


    return 0;
}