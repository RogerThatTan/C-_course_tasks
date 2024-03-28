#include <iostream>
using namespace std;

class Mobile{


private :

    string name;
    string number;
    float balance;
    string osName;
    bool lock;

public :

    Mobile(){}

    Mobile(string n, string num, float b, string os, bool ls){


        name = n;
        number = num;
        balance = b;
        osName = os;
        lock = ls;

    }

    ~Mobile(){}


    void setName(string n)              {name = n;}
    void setNumber(string num)             {number = num;}
    void setBalance(float b)            {balance = b;}
    void setOsName(string os)           {osName=os;}
    void setLock(bool ls)               {lock = ls;}

    string getName()                    {return name;}
    string getNumber()                  {return number;}
    float  getBalance()                 {return balance;}
    string getOsName()                  {return osName;}
    bool   getLock()                    {return lock;}



    void showMobile(){

        cout<<"Mobile Owner Name    :"<<getName()<<endl;
        cout<<"Mobile Number        :"<<getNumber()<<endl;
        cout<<"Mobile Balance       :"<<getBalance()<<endl;
        cout<<"Mobile OS Name       :"<<getOsName()<<endl;
        cout<<"Lock Status          :"<<getLock()<<endl;



    }


void Recharge(int amount){

    if(lock==false){

        if(amount>=0){

            balance+=amount;
        }
    }
}



void CallSomeone(int time){

    if(lock==false){

        if(balance>=0){

            balance-=time*0.5;
        }
    }
}



};



int main(){


Mobile m1("Tanvir","01715658970",50,"iOS",false);
m1.showMobile();
cout<<endl;


cout<<"After Recharge: "<<endl;
m1.Recharge(500);
m1.showMobile();
cout<<endl;

cout<<"After Calling Someone: "<<endl;
m1.CallSomeone(25);
m1.showMobile();




}
