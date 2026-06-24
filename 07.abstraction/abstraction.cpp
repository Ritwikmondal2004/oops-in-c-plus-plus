#include<bits/stdc++.h>
using namespace std;

class ATM{
    private:
    float balance=5000;
    public:
    void withdrawl(int amount){
        balance-=amount;
        cout<<"withdrawl success"<<endl;
    }
    void showBalance(){
        cout<<"Balance: "<<balance;
    }
};

int main(){

    ATM a;
    a.withdrawl(2000);
    a.showBalance();


    return 0;
}