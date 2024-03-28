//A program that would print the information (name, year of joining, salary, address) of three
//employees by creating a class named 'Employee'. You must use private properties and public
//constructor, destructors, and methods for this class.

#include<iostream>
using namespace std;

class Employee{

private:
    string name,year,salary,address;

public:
    //Default Constructor
    Employee(){
    name = " null ";
    year = " null ";
    salary = " null ";
    address = " null ";

    }

    //Parametarized Constructor
    Employee(string n, string y, string s,string a){
    name = n;
    year = y;
    salary = s;
    address = a;

    }

    //Destructor
    ~Employee(){}

    //Function
    void showDetails(){

    cout<<name<<"\t"<<year<<"\t\t\t"<<salary<<"\t\t"<<address<<endl;

    }

};

//Main BODY
int main(){

cout<<"Name"<<"\t"<<"Year of Joining"<<"\t\t"<<"Salary"<<"\t\t"<<"Address"<<endl;

Employee e1("Robert","1994","$1200","64C- WallsStreat");
    e1.showDetails();
Employee e2("Sam","2000","$750","68D- WallsStreat");
    e2.showDetails();
Employee e3("John","1999","$900 ","26B- WallsStreat");
    e3.showDetails();

return 0;
}
