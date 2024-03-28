#include<iostream>
using namespace std;

class Account{
private :

    string aname;
    string ano;
    float balance;
    string atype;

public :
    Account (){}
    Account(string n, string no, float b, string aty){

    aname = n;
    ano = no;
    balance = b;
    atype = aty;

    }
    ~Account(){}

    void setAname(string n){
        aname = n;
    }

    string getAname(){
        return aname;
    }

    void setAno(string no){
        ano = no;
    }

    string getAno(){
        return ano;
    }

    void setBalance(float b){
        balance = b;
    }

    float getBalance(){
        return balance;
    }

    void setAtype(string aty){
        atype = aty;
    }

    string getAtype(){
        return atype;
    }

    void showAccount(){

    cout<<"---Account Details---"<<endl;
    cout<<"\nAccount Name: "<<getAname()<<endl;
    cout<<"Account No: "<<getAno()<<endl;
    cout<<"Balance: "<<getBalance()<<endl;
    cout<<"Account Type: "<<getAtype()<<endl;
    cout<<endl;

    }

    void Deposit(float amt){

        if(amt>=0){
            balance +=amt;  }}

    void Withdraw(float amt){

        if(amt<=balance && amt>=0)
    {
        balance -=amt;      }}

    void transferBalance(Account *reciever, float amt){

        Withdraw(amt);
        reciever->Deposit(amt);
    }

};



int main(){

Account a1("Sadman","094SAD014",50000,"Student");
a1.showAccount();
Account a2("XYZ University","3643XYZ015",250000,"Business");
a2.showAccount();
a1.Deposit(2000.75);
a1.showAccount();
a1.Withdraw(5000.99);
a1.showAccount();
a1.transferBalance(&a2,15000);
a1.showAccount();
a2.showAccount();

return 0;
}
