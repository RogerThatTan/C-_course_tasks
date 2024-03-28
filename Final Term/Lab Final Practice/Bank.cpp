#include<iostream>
using namespace std;

class Account{

private : string name,account_no,account_type;
          float balance;


public:


    Account(){}

    Account(string n, string no, string ty, float b){

        name = n;
        account_no=no;
        account_type = ty;
        balance = b;

    }

    ~Account(){}

    //Setter Method


    void setName(string n)              {name = n;}
    void setAccount_no(string no)       {account_no=no;}
    void setAccount_type(string ty)     {account_type=ty;}
    void setBalance(float b)            {balance = b;}


    //Getter Method


    string getName()                    {return name;}
    string getAccount_no()              {return account_no;}
    string getAccount_type()            {return account_type;}
    float  getBalance()                 {return balance;}


    void showAccount(){

            cout<<"Account Name                 :"<<getName()<<endl;
            cout<<"Account No                   :"<<getAccount_no()<<endl;
            cout<<"Account type                 :"<<getAccount_type()<<endl;
            cout<<"Account Balance              :"<<getBalance()<<endl;

    }




void Deposit(int amt){

        if(amt>=0){

            balance += amt;
        }

}


void Withdraw(int amt){

        if(amt>=500){

            balance -=amt;
        }
}


void Transfer(Account *a2,int amt){

        Withdraw(amt);
        a2 ->Deposit(amt);

}



};



int main(){



Account a1("Tanvir Hassan","2234332TAN2312312","Personal",23000);
a1.showAccount();
cout<<endl;

Account a2("Tanzil Hassan","2242332TAN2423412","Business",50000);
a2.showAccount();
cout<<endl;



cout<<"After Deposit"<<endl;
a1.Deposit(10000);
a1.showAccount();
cout<<endl;

cout<<"After Withdraw"<<endl;
a1.Withdraw(5000);
a1.showAccount();
cout<<endl;


cout<<"After Transfer"<<endl;
a1.Transfer(&a2,15000);
a1.showAccount();
cout<<endl;
a2.showAccount();
cout<<endl;














return 0;

}
