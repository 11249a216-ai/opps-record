#include<iostream>
using name space std;
class Bank account{
    private:
    int account number;
    int balance;
    Public:
    Bank Account(inta,floatb):
    acc no(a).balance(b){}
    void deposit(double amt)
    {balance + = aml;}
    void with draw(double amt){
        if(amt <=balance) balance-=amt;
        else(out<<"Insufficient balance!\n");
    }
    void show(){
        cout<<"Acc no":<<accno<<"/ balance:"<< balance<<endl;}
    };
    int main()
    bankaccount acc(101,5000);
    acc.show();
    acc.deposit(2000);
    acc.show();
    acc.withdraw(3000);
    acc.show();
    acc.withdraw(6000);
    acc.show();
}