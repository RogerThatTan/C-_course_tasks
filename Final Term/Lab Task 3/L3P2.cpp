#include<iostream>
using namespace std;

class Mobile{
private :

    string mon;
    string mno;
    float mb;
    string mosn;
    bool locks;

public :

    Mobile(){}
    Mobile(string n,string no,float b,string os,bool ls){

    mon = n;
    mno = no;
    mb=b;
    mosn = os;
    locks = ls;

    }

    ~Mobile(){}

    void setMon(string n){

        mon = n;
    }
    string getMon(){

        return mon;
    }



    void setMno(string no){

        mno = no;
    }
    string getMno(){

        return mno;
    }


    void setMb(float b){

        mb = b;
    }
    float getMb(){

        return mb;
    }


      void setMosn(string os){

        mosn = os;
    }
    string getMosn(){

        return mosn;
    }

    void setLockStatus(bool ls){

        locks = ls;
    }

    bool getLockStatus(){

        return locks;
    }

    void showMobileDetails(){

        cout<<"---Details of Mobile Owner---"<<endl;
            cout<<"\nMobile Owner Name: "<<getMon()<<endl;
                cout<<"Mobile Number: "<<getMno()<<endl;
                    cout<<"Mobile Balance: "<<getMb()<<endl;
                        cout<<"Mobile OS: "<<getMosn()<<endl;
                            cout<<"Lock Status: "<<getLockStatus()<<endl;
                                    cout<<endl;

    }


    void Recharge(int amt){

        if(locks==false){

            if(amt>=0){

                mb+=amt;
                        }
                            }
                                }

    void CallSomeone(int timeDuration){

            if(locks==false){

                if(timeDuration>=0)
                    mb=mb-(timeDuration*0.5);
                                                }
                                                    }
};


int main(){

Mobile m1("John","01715473829",80.00,"iOS",false);
m1.showMobileDetails();
m1.Recharge(100.00);
m1.showMobileDetails();
m1.CallSomeone(25);
m1.showMobileDetails();



return 0;
}

