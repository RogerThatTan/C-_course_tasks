//Assign and print the roll number, phone number and address of two students having names "Sam" and
//"John" respectively by creating two objects of the class 'Student'. You must use private properties
//and public constructor and methods for this class.

#include<iostream>
using namespace std;

class Student{

private:
    string name , roll, address,phone;

public:

    //Default Constructor
    Student(){

    name = "null";
    roll = "null";
    address = "null";

    }

    //Parametarized Constructor
    Student(string n, string r, string p, string a){

    name = n;
    roll = r;
    phone = p;
    address = a;

    }

    //Destructor
    ~Student(){}

    //Display Function

void showDetails(){
    cout<<"--------Student Information--------\n"<<endl;
    cout<<"Student Name : "<<name<<endl;
    cout<<"Roll Number : "<<roll<<endl;
    cout<<"Phone Number : "<<phone<<endl;
    cout<<"Address : "<<address<<endl;
    cout<<endl;

}

};

//Main BODY

int main(){

    Student s1("Sam","12464811","(218) 687-5118","21242 Little Sarah Rd Erskine, Minnesota(MN), 56535");
        s1.showDetails();
    Student s2("John","12464911","(225) 659-7408","63525 Bayou Jacob Rd Plaquemine, Louisiana(LA), 70764");
        s2.showDetails();

return 0;
}

