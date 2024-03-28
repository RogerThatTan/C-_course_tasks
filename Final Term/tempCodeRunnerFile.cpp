#include<iostream>
using namespace std;
class person{
protected :
    // variable type
    string Name,Age,FatherName,MotherName, PhoneNumber,PresentAddress,PermanentAddress,Sex,Nationality,BirthDate,MaritalStatus,BloodGroup;

public :
    // empty constructor
    person (){}
    // Parameterize constructor
    // person Parameterize constructor
    person (string n,string a,string f ,string mo,string p,string pre,string per,string s,string na,string b,string m,string bl){
     Name = n;
     Age = a;
     FatherName = f;
     MotherName = mo;
     PhoneNumber  = p;
     PresentAddress = pre;
     PermanentAddress = per;
     Sex = s;
     Nationality = na;
     BirthDate = b;
     MaritalStatus = m;
     BloodGroup = bl;}


//setter
//getter
void setName (string n)
{
    Name = n;
}
string  getName(){
    return Name;
}


//setter
//getter
void setAge (string a)
{
    Age = a;
}
string  getAge(){
    return Age;
}


//setter
//getter
void setFatherName (string f)
{
    FatherName = f;
}
string  getFatherName(){
    return FatherName;
}


//setter
//getter
void setMotherName (string mo)
{
    MotherName= mo;
}
string  getMotherName(){
    return MotherName;
}


//setter
//getter
void setPhoneNumber (string p)
{
    PhoneNumber= p;
}
string  getPhoneNumber(){
    return PhoneNumber;
}


//setter
//getter
void setPresentAddress(string pre)
{
    PresentAddress= pre;
}
string  getPresentAddress(){
    return PresentAddress;
}


//setter
//getter
void setPermanentAddress  (string per)
{
   PermanentAddress = per;
}
string  getPermanentAddress (){
    return PermanentAddress ;
}


//setter
//getter
void setSex (string s)
{
    Sex = s;
}
string  getSex(){
    return Sex;
}


//setter
//getter
void setNationality (string na)
{
    Nationality = na;
}
string  getNationality(){
    return Nationality;
}


//setter
//getter
void setBirthDate (string b)
{
    BirthDate = b;
}
string  getBirthDate(){
    return BirthDate;
}


//setter
//getter
void setMaritalStatus  (string m)
{
     MaritalStatus  = m;
}
string  getMaritalStatus (){
    return MaritalStatus ;
}


//setter
//getter
void setBloodGroup  (string bl)
{
   BloodGroup  = bl;
}
string  getBloodGroup (){
    return BloodGroup ;
}







void persondetails() {

cout <<"\nName = "<<Name<<endl;
cout <<"Age = "<<Age<<endl;
cout <<"Father Name = "<<FatherName<<endl;
cout <<"Mother Name = "<<MotherName<<endl;
cout <<"PhoneNumber = "<<PhoneNumber<<endl;
cout <<"PresentAddress = "<<PresentAddress<<endl;
cout <<"PermanentAddress = "<<PermanentAddress<<endl;
cout <<"Sex = "<<Sex<<endl;
cout <<"Nationality = "<<Nationality<<endl;
cout <<"BirthDate = "<<BirthDate<<endl;
cout <<"MaritalStatus = "<<MaritalStatus<<endl;
cout <<"BloodGroup = "<<BloodGroup <<endl;
}

};

class student : virtual public person {
protected :
    // variable type

    string Institute,IDNumber,Section,Depertment,Slot,Session,Semester,CGPA;
    // Parameterize constructor

    // student Parameterize constructor
public :
     student (string n,string a,string f,string mo,string p,string pre,string per,string s,string na,string b,string m,string bl,string i,string
              id,string sec,string d,string sl,string se,string sem,string cg):person (n,a,f,mo,p,pre,per,s,na,b,m,bl){

          Institute =i;
          IDNumber =id;
          Section   =sec;
          Depertment =d;
          Slot   =sl;
          Session =se;
          Semester =sem;
          CGPA =cg;
}

//setter
//getter
void setInstitute  (string i)
{
   Institute  = i;
}
string  getInstitute (){
    return Institute ;
}


//setter
//getter
void setIDNumber  (string id)
{
    IDNumber  = id;
}
string  getIDNumber (){
    return  IDNumber;
}


//setter
//getter
void setSection  (string sec)
{
   Section   = sec;
}
string  getSection  (){
    return Section  ;
}


//setter
//getter
 void setDepertment  (string d)
{
   Depertment = d;
}
string  getDepertment (){
    return Depertment ;
}


//setter
//getter
void setSlot   (string sl)
{
   Slot   = sl;
}
string  getSlot  (){
    return Slot  ;
}


//setter
//getter
void setSession  (string se)
{
   Session = se;
}
string  getSession (){
    return Session ;
}


//setter
//getter
void setSemester  (string sem)
{
   Semester = sem;
}
string  getSemester (){
    return Semester ;
}


//setter
//getter
 void setCGPA   (string cg)
{
   CGPA   = cg;
}
string  getCGPA  (){
    return CGPA  ;
}

void studentDetails() {
person :: persondetails();
cout <<"Institute = "<<Institute<<endl;
cout <<"ID Number = "<<IDNumber<<endl;
cout <<"Section  = "<<Section <<endl;
cout <<"Depertment = "<<Depertment<<endl;
cout <<"Slot = "<<Slot <<endl;
cout <<"Session = "<<Session<<endl;
cout <<"Semester = "<<Semester<<endl;
cout <<"CGPA = "<<CGPA<<endl;

}
   };


class graduatestudent : public student {

protected :
    // variable type

    string scholarship,type;
    int passingYear;
    // Parameterize constructor

     // graduatestudent Parameterize constructor
public :
   graduatestudent (string n,string a,string f,string mo,string p,string pre,string per,string s,string na,string b,string m,string bl,string i,string
                  id,string sec,string d,string sl,string se,string sem,string cg,string sch,string t,int pass):student (n,a,f,mo,p,pre,per,s,na,b,m,bl,
                  i,id,sec,d,sl,se,sem,cg){

    scholarship = sch;
    type  = t;
    passingYear  = pass;
    }
//setter
//getter
void setscholarship  (string sch)
{
   scholarship  = sch;
}
string  getscholarship  (){
    return scholarship ;
}

//setter
//getter
void settype  (string t)
{
     type    = t;
}
string  gettype   (){
    return   type   ;
}


//setter
//getter
void setpassingYear   (int pass)
{
    passingYear   = pass;
}
int  getpassingYear  (){
    return  passingYear  ;
}

void graduateStudentDetails(){
student :: studentDetails();
cout <<"Scholarship = "<<scholarship<<endl;
cout <<"Type= "<<type<<endl;
cout <<" PassingYear  = "<< passingYear <<endl;
}
};


class employee : virtual public person {

protected :
    // variable type

     string CompanyName,IdNo,Salary,JoinDate;
     // Parameterize constructor

     // employee Parameterize constructor
public: employee (string n,string a,string f ,string mo,string p,string pre,string per,string s,string na,string b,string m,string bl,string cm, string in,
                  string sal, string jo ): person (n,a,f,mo,p,pre,per,s,na,b,m,bl){

       CompanyName = cm;
       IdNo    = in;
       Salary     = sal;
       JoinDate  = jo;
}

//setter
//getter
void setCompanyName   (string cm)
{
    CompanyName   = cm;
}
string  getCompanyName  (){
    return  CompanyName  ;
}


//setter
//getter
void setIdNo  (string in)
{
    IdNo   = in;
}
string getIdNo  (){
    return  IdNo  ;
}


//setter
//getter
void setSalary    (string  sal)
{
    Salary   =  sal;
}
string getSalary   (){
    return  Salary   ;
}


//setter
//getter
void setJoinDate   (string jo)
{
    JoinDate   = jo;
}
string  getJoinDate  (){
    return JoinDate  ;
}

void employeeDetails(){

person:: persondetails();
cout <<"Employee At = "<<CompanyName<<endl;
cout <<"IdNo = "<<IdNo<<endl;
cout <<"Salary = "<<Salary <<endl;
cout <<"JoiningDate = "<<JoinDate<<endl;
}
   };


class faculty :  public employee {
protected :
    // variable type

         string Designation,Department,RoomNumber,ClassHour;
    // Parameterize constructor

    // faculty Parameterize constructor
 public :faculty  (string n,string a,string f ,string mo,string p,string pre,string per,string s,string na,string b,string m,string bl,string cm, string in,
                  string sal, string jo,string des,string dep,string roo ,string cla) :employee (n,a,f,mo,p,pre,per,s,na,b,m,bl,cm,in,sal,jo){

    Designation = des;
    Department = dep;
    RoomNumber =roo;
    ClassHour =cla;}
//setter
//getter
 void setDesignation   (string des)
{
   Designation = des;
}
string  getDesignation  (){
    return Designation  ;
}

//setter
//getter
   void setDepartment  (string dep)
{
    Department  = dep;
}
string  getDepartment  (){
    return Department  ;
}


//setter
//getter
 void setRoomNumber  (string roo)
{
   RoomNumber   = roo;
}
string  getRoomNumber (){
    return RoomNumber  ;
}


//setter
//getter
void setClassHour   (string cla)
{
   ClassHour = cla;
}
string  getClassHour  (){
    return ClassHour  ;
}

void facultyDetails(){
employee:: employeeDetails();
cout <<"Designation  = "<< Designation <<endl;
cout <<"Department= "<<Department<<endl;
cout <<"RoomNumber  = "<<RoomNumber  <<endl;
cout <<"ClassHour  = "<<ClassHour  <<endl;
}
};


class officer : public employee {
protected :
    // variable type

    string Designation, Department,Building, RoomNumber,OfficeTime;
     // Parameterize constructor

    // officer Parameterize constructor
public : officer (string n,string a,string f ,string mo,string p,string pre,string per,string s,string na,string b,string m,string bl,string cm, string in,
                  string sal, string jo, string des,string dep,string bu,string roo,string off) :employee (n,a,f,mo,p,pre,per,s,na,b,m,bl,cm,in,sal,jo){

    Designation = des;
    Department = dep;
    Building = bu;
    RoomNumber =roo;
    OfficeTime = off;
}

//setter
//getter
void setDesignation   (string des)
{
   Designation = des;
}
string  getDesignation  (){
    return Designation  ;
}


//setter
//getter
   void setDepartment  (string dep)
{
    Department  = dep;
}
string  getDepartment  (){
    return Department  ;
}


//setter
//getter
void setBuilding    (string bu)
{
  Building  = bu;
}
string  getBuilding   (){
    return Building   ;
}


//setter
//getter
void setRoomNumber   (string roo)
{
    RoomNumber = roo;
}
string  getRoomNumber  (){
    return  RoomNumber  ;
}


//setter
//getter
void setOfficeTime  (string off)
{
   OfficeTime = off;
}
string  getOfficeTime  (){
    return OfficeTime  ;
}


void officerDetails(){
employee:: employeeDetails();
cout <<"Designation  = "<< Designation <<endl;
cout <<"Department= "<<Department<<endl;
cout <<"Building   = "<<Building   <<endl;
cout <<"RoomNumber  = "<<RoomNumber  <<endl;
cout <<"OfficeTime   = "<<OfficeTime  <<endl;

}

};

class ta :   public faculty,  public student {
protected :
    // variable type
  string facultyName ;

public :
ta(string n,string a,string f ,string mo,string p,string pre,string per,string s,string na,string b,string m,string bl,string cm, string in,string sal,string jo,string des,string dep,string roo,string cla,string n,string a,string f,string mo,string p,string pre,string per,string s,string na,string b,string m,string bl,string i,string id,string sec,string d,string sl,string se,string sem,string cg,string fa):
                  faculty(n,a,f,mo,p,pre,per,s,na,b,m,bl,cm,in,sal,jo,des,dep,roo,cla),student(n,a,f,mo,p,pre,per,s,na,b,m,bl,i,id,sec,d,sl,se,sem,cg),person(n,a,f,mo,p,pre,per,s,na,b,m,bl){
     facultyName = fa ;
                  }
//setter
//getter
//void setfacultyName  (string fa)
//{
 //facultyName  = fa;
//}
//string  getfacultyName (){
//return facultyName ;
//}

void taDetails() {
cout<<endl;
//cout <<"facultyName = "<<facultyName<<endl;

int main (){

cout<<"\n\n-----------persondetails-------------"<<endl;
person p1 ("marishat","22","Md.Mahbub","Tanjin Ara","01723456786","uttara","dinajpur","female", "bangladeshi","18th may,2001","unmarried","o+");
p1.persondetails();

cout<<"\n\n\n\n-----------studentDetails-------------"<<endl;
student s1("muied","20","Md.Jasim","Fatema ara","01273645874","shahjahanpur","Bagura","male" ,"bangladeshi","18th june,2002","unmarried","o+","AIUB",
           "22-46543-1","B9","CSE","Spring","2021-2022","FIRST","3.50");
s1.studentDetails() ;

cout<<"\n\n\n\n-----------graduatestuDentdetails-------------"<<endl;
graduatestudent g1 ("muied","20","Md.Jasim","Fatema ara","01273645874","shahjahanpur","Bagura","male" ,"bangladeshi","18th june,2002","unmarried","o+","AIUB",
           "22-46543-1","B9","CSE","Spring","2021-2022","FIRST","3.50","45%","merit",2018);
g1.graduateStudentDetails();

cout<<"\n\n\n\n-----------employeeDetails-------------"<<endl;
employee e1 ("Karim","30","Md.Rahim","Rahima Bibi","01984328786","Mirpur","Feni","male", "bangladeshi","20th June,1990","unmarried","o+",
             "AIUB","2134-987","25000/-","02-11-22020");
e1.employeeDetails();

cout<<"\n\n\n\n-----------facultyDetails-------------"<<endl;
faculty f1 ("Hira","28","Md.Monsur","Tasmi Khatun","01675431098","Badda","dinjapur","male", "bangladeshi","18th may,1992","unmarried","o+",
             "AIUB","21-0984","50000/-","02-11-11120","lecturer","Math","DNS12","5hours");
f1.facultyDetails();

cout<<"\n\n\n\n-----------officerDetails-------------"<<endl;
officer o1 ("Mizan","30","Md.Mofid","Mousumi Begum","01723456786"," Baridhara","Chittagong","male", "bangladeshi","12th january,1990","married","o+",
             "AIUB","7241-987","30000/-","02-11-33320","register officer","register room","D","DN201","08.00 am");
o1.officerDetails();

cout<<"\n\n\n\n-----------taDetails-------------"<<endl;
ta t1("string n","string a","string f","string mo","string p","string pre",
"string per","string s","string na","string b","string m","string bl","string i","string id","string sec",
"string d","string sl","string se","string sem","string cg","string n","string a","string f","string mo","string p","string pre","string per","string s","string na","string b","string m","string bl","string cm", "string in",
"string sal", "string jo","string des","string dep","string roo","string cla","string fa")
t1.tadetails();


return 0;
}

