#include<iostream>
using namespace std;

class Employee{

    protected : int employeeID;
                string employeeName;
                double salary;

    public:

    Employee(){}

    Employee(int id,string name,double sal){


        employeeID = id;
        employeeName = name;
        salary = sal;

    }

    ~Employee(){}

//Using Setter Method

    void setEmployeeID(int id)          {employeeID = id;}
    void setEmployeeName(string name)   {employeeName=name;}
    void setSalary(double sal)          {salary=sal;}

//Using Getter Method

    int     getEmployeeID()                 {return employeeID;}
    string  getEmployeeName()               {return employeeName;}
    double  getSalary()                     {return salary;}


//Creating Display Function

    void displayEmployeeInformation(){

    cout<<"-------- Employee Information --------"<<endl;


}


};



class Salesman : public Employee{


public :

        string salesArea;
        string productName;
        int managerID;

//Parameterized Constructor


        Salesman(int id,string name,double sal,string area, string pname, int ID) : Employee(id,name,sal){


                        salesArea = area;
                        productName = pname;
                        managerID = ID;


        }

//Destructor

        ~Salesman(){}


//Using setter method

        void setSalesArea   (string area)               {salesArea = area;}
        void setProductName (string pname)              {productName = pname;}
        void setManagerID    (int ID)                   {managerID= ID;}


//Using getter method

        string getSalesArea     ()                      {return salesArea;}
        string getProductName   ()                      {return productName;}
        int    getManagerID     ()                      {return managerID;}


//showDetails Function

void showSalesmanDetails(){


    cout<<"-------- Salesman Details --------"<<endl;
    cout<<endl;
    cout<<"Salesman Name                    :"<<employeeName<<endl;
    cout<<"Salesman ID                      :"<<employeeID<<endl;
    cout<<"Salesman's Area                  :"<<salesArea<<endl;
    cout<<"Salesman's Product Name          :"<<productName<<endl;
    cout<<"Salesman's Manager ID            :"<<managerID<<endl;
    cout<<"Salesman's Salary                :"<<salary<<" BDT "<<endl;
    cout<<endl;


}

};



//Manager inherits Employee Class

class Manager : public Employee{


//Access Modifier

    public : string areaName;


    Manager(int id,string name,double sal,string area):Employee(id,name,sal){

        areaName = area;

}

    ~Manager(){}


//Setter Method


    void setAreaName(string area)       {areaName = area;}


//Getter Method

    string getAreaName()                {return areaName;}


    void showManagerDetails(){


    cout<<"-------- Manger Details --------"<<endl;
    cout<<endl;
    cout<<"Manager Name                     :"<<employeeName<<endl;
    cout<<"Manager ID                       :"<<employeeID<<endl;
    cout<<"Manager Area                     :"<<areaName<<endl;
    cout<<"Manager Salary                   :"<<salary<<" BDT "<<endl;
    cout<<endl;



}


// Increment Part

    void incrementSalary(Salesman *s, double amount){

        s->setSalary(s->getSalary()+amount);
    }


};



int main(){


Manager m1(22464811,"Mohammed Tanvir Hassan",50000,"Dhaka Cantonment");
m1.showManagerDetails();
cout<<endl;

Salesman s1(22464911,"Rahim",20000,"Dhaka Cantonment","Keya Soyabean Oil", 22464811);
s1.showSalesmanDetails();
cout<<endl;


m1.incrementSalary(&s1,5000);
s1.showSalesmanDetails();
cout<<endl;

return 0;
}
