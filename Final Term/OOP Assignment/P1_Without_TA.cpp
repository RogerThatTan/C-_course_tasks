#include<iostream>
using namespace std;


//Parent Class

class Person{
//data members of person
//Access Modifiers

protected:

//Protected Variable

        string nation_id,gender;

//Access Modifiers

public:

//Public Variable

        string name,dob,nationality,address,contact_no,email_id,m_status,b_grp,height,weight,skin_tone;

        int age;

//Parameterized constructors

        Person(string n,string d, int a,string g,string b,string h,
                    string w,string st,string m,string na,string nid,
                                        string ad,string ph,string eid)
{
        name = n;
        dob = d;
        age = a;
        gender = g;
        b_grp = b;
        height = h;
        weight = w;
        skin_tone=st;
        m_status=m;
        nationality = na;
        nation_id = nid;
        address = ad;
        contact_no = ph;
        email_id   = eid;

}

//Destructor

        ~Person(){}

//Setter Method

        void setName(string n){
            name=n;
        }
        void setDob(string d){
            dob=d;
        }
        void setAge(int a){
            age=a;
        }
        void setGender(string g){
            gender=g;
        }
        void setB_grp(string b){
            b_grp=b;
        }
        void setHeight(string h){
            height=h;
        }
        void setWeight(string w){
            weight=w;
        }
        void setSkin_tone(string st){
            skin_tone = st;
        }
        void setM_status(string m){
            m_status=m;
        }
        void setNationality(string na){
            nationality=na;
        }
        void setNation_id(string nid){
            nation_id=nid;
        }
        void setAddress(string ad){
            address=ad;
        }
        void setContact_no(string ph){
            contact_no=ph;
        }
        void setEmail_id(string eid){
            email_id=eid;
        }

//Getter Method

        string getName()        {return name;}
        string getDob()         {return dob;}
        int    getAge()         {return age;}
        string getGender()      {return gender;}
        string getB_grp()       {return b_grp;}
        string getHeight()      {return height;}
        string getWeight()      {return weight;}
        string setSkin_tone()   {return skin_tone;}
        string getM_status()    {return m_status;}
        string getNationality() {return nationality;}
        string getNation_id()   {return nation_id;}
        string getAddress()     {return address;}
        string getContact_no()  {return contact_no;}
        string setEmail_id()    {return email_id;}


//Display Function of Parent Class Person

void    showPerson(){

        cout<<" --------- Person Class --------"<<endl;
        cout<<""<<endl;
        cout<<"Name                             : "<<name<<endl;
        cout<<"Date of Birth                    : "<<dob<<endl;
        cout<<"Age                              : "<<age<<endl;
        cout<<"Gender                           : "<<gender<<endl;
        cout<<"Blood Group                      : "<<b_grp<<endl;
        cout<<"Height                           : "<<height<<endl;
        cout<<"Weight                           : "<<weight<<endl;
        cout<<"Skin Tone                        : "<<skin_tone<<endl;
        cout<<"Marital Status                   : "<<m_status<<endl;
        cout<<"Nationality                      : "<<nationality<<endl;
        cout<<"National ID                      : "<<nation_id<<endl;
        cout<<"Address                          : "<<address<<endl;
        cout<<"Contact No                       : "<<contact_no<<endl;
        cout<<"Email ID                         : "<<email_id<<endl;
}
};

//Child Class Employee inherits Parent Class Person

class Employee:  public Person
{
//data members of employee
//Access Modifiers

protected:

//Protected Variable

        string salary;

//Access Modifiers

public:

//Public Variable

        string employee_id, dept, date_join,designation,work_time;

//Parameterized constructors : Person Class Constructor

Employee(string n,string d, int a,string g,string b,string h,string w,string st,string m,string na,string nid,
                string ad,string ph,string eid,string e_id,string de,string ds,string wt,string s,string dj):Person(n,d,a,g,b,h,w,st,
                                                                                                             m,na,nid,ad,ph,eid)

{

        employee_id = e_id;
        dept = de;
        salary = s;
        date_join = dj;
        designation = ds;
        work_time = wt;
}
//Destructor

        ~Employee(){}

//Setter Method

        void setEmployee_id(string e_id){
        employee_id = e_id;
        }
        void setDept(string de){
        dept = de;
        }
        void setSalary(string s){
        salary = s;
        }
        void setDate_join(string dj){
        date_join = dj;
        }
        void setDesignation(string ds){
        designation = ds;
        }
        void setWork_time(string wt){
        work_time = wt;
        }


//Getter Method

        string getEmployee_id(){ return employee_id;}
        string getDept(){return dept;}
        string getSalary(){return salary;}
        string getDate_join(){return date_join;}
        string getDesignation(){return designation;}
        string getWork_time(){return work_time;}


//Display Function for child class employee

void    showEmployee(){

        cout<<" ------ Employee Class ----------"<<endl;
        cout<<""<<endl;
        cout<<" ------ Official Information ------"<<endl;
        cout<<""<<endl;
        cout<<"Name                             : "<<name<<endl;
        cout<<"Employee ID                      : "<<employee_id<<endl;
        cout<<"Department                       : "<<dept<<endl;
        cout<<"Designation                      : "<<designation<<endl;
        cout<<"Work Hour                        : "<<work_time<<endl;
        cout<<"Salary                           : "<<salary<<endl;
        cout<<"Joining Date                     : "<<date_join<<endl;
        cout<<endl;
        cout<<" ------ Personal Information ------"<<endl;
        cout<<""<<endl;
        cout<<"Date of Birth                    : "<<dob<<endl;
        cout<<"Gender                           : "<<gender<<endl;
        cout<<"Blood Group                      : "<<b_grp<<endl;
        cout<<"National ID                      : "<<nation_id<<endl;
        cout<<"Martial Status                   : "<<m_status<<endl;
        cout<<"Address                          : "<<address<<endl;
        cout<<"Contact No                       : "<<contact_no<<endl;
        cout<<"Email ID                         : "<<email_id<<endl;
}

} ;

//Child Class Officer inherits Parent Class Employee

class Officer :  public Employee
{
//data members of officer
//Access Modifier

protected:


//Access Modifier

public:

//Public Variable

        string company_name;

//Parameterized constructors : Employee Class Constructor

Officer(string n,string d, int a,string g,string b,string h,string w,string st,string m,string na,string nid,string ad,string ph,string eid,
                string e_id,string de,string ds,string wt,string s,string dj,string cn):Employee(n,d,a,g,b,h,w,st,m,na,nid,ad,ph,
                                                                                                 eid,e_id,de,ds,wt,s,dj)
{
        company_name=cn;
}

//Destructor

        ~Officer(){}

//Setter Method

        void setCompany_name(string cn){
                company_name=cn;
        }

//Getter Method

        string getCompany_name(){return company_name;}

//Display Function for Officer Child Class

void    showOfficer(){

        cout<<" ------ Officer Class ----------"<<endl;
        cout<<""<<endl;
        cout<<" ------ Official Information ------"<<endl;
        cout<<""<<endl;
        cout<<"Name                             : "<<name<<endl;
        cout<<"Company Name                     : "<<company_name<<endl;
        cout<<"ID                               : "<<employee_id<<endl;
        cout<<"Designation                      : "<<designation<<endl;
        cout<<"Work Hour                        : "<<work_time<<endl;
        cout<<"Salary                           : "<<salary<<endl;
        cout<<"Joining Date                     : "<<date_join<<endl;
        cout<<endl;
        cout<<" ------ Personal Information ------"<<endl;
        cout<<""<<endl;
        cout<<"Date of Birth                    : "<<dob<<endl;
        cout<<"Gender                           : "<<gender<<endl;
        cout<<"Blood Group                      : "<<b_grp<<endl;
        cout<<"National ID                      : "<<nation_id<<endl;
        cout<<"Martial Status                   : "<<m_status<<endl;
        cout<<"Address                          : "<<address<<endl;
        cout<<"Contact No                       : "<<contact_no<<endl;
        cout<<"Email ID                         : "<<email_id<<endl;
}

};

//child class Faculty inherits employee class

class Faculty :  public Employee
{
//data member of faculty
//Access Modifier - protected

protected:

//Access Modifier - public

public:

//public variables

        string u_name,degree;

//Parameterized constructors : Employee constructor

Faculty(string n,string d, int a,string g,string b,string h,string w,string st,string m,string na,string nid,string ad,string ph,string eid,
                string e_id,string de,string ds,string wt,string s,string dj,string un,string deg):Employee(n,d,a,g,b,h,w,st,m,na,nid,ad,ph,
                                                                                                            eid,e_id,de,ds,wt,s,dj)
{
        u_name=un;
        degree = deg;
}

//Destructor

~Faculty(){}

//Setter Method

        void setU_name(string un){
                u_name = un;
        }

        void setDegree(string deg){
                degree = deg;
        }

//Getter Method

        string getU_name(){return u_name;}
        string getDegree(){return degree;}

//Display Function for faculty

void    showFaculty(){

        cout<<" ------ Faculty Class ----------"<<endl;
        cout<<""<<endl;
        cout<<" ------ Official Information ------"<<endl;
        cout<<""<<endl;
        cout<<"Name                             : "<<name<<endl;
        cout<<"University Name                  : "<<u_name<<endl;
        cout<<"ID                               : "<<employee_id<<endl;
        cout<<"Department                       : "<<dept<<endl;
        cout<<"Designation                      : "<<designation<<endl;
        cout<<"Educational Details              : "<<degree<<endl;
        cout<<"Work Hour                        : "<<work_time<<endl;
        cout<<"Salary                           : "<<salary<<endl;
        cout<<"Joining Date                     : "<<date_join<<endl;
        cout<<endl;
        cout<<" ------ Personal Information ------"<<endl;
        cout<<""<<endl;
        cout<<"Date of Birth                    : "<<dob<<endl;
        cout<<"Gender                           : "<<gender<<endl;
        cout<<"Blood Group                      : "<<b_grp<<endl;
        cout<<"National ID                      : "<<nation_id<<endl;
        cout<<"Martial Status                   : "<<m_status<<endl;
        cout<<"Address                          : "<<address<<endl;
        cout<<"Contact No                       : "<<contact_no<<endl;
        cout<<"Email ID                         : "<<email_id<<endl;


}
};

//Student child class inherits Parent class person

class Student : public Person

{
//data member of student
//Access modifiers

public:

//public variables

        string university_name,department,student_id,cgpa,semster,credit,year,section,olevel,sname,alevel,cname;

//Parameterized constructors for student : person class

Student(string n,string d, int a,string g,string b,string h,string w,string st,string m,string na,string nid,
        string ad,string ph,string eid,string uname,string dept,string stid,string cg,string sem,string cre,
        string ye,string sec,string ol,string sn,string al,string cn):Person(n,d,a,g,b,h,w,st,m,na,nid,ad,ph,eid)
{
        university_name = uname;
        department = dept;
        student_id = stid;
        cgpa = cg;
        semster = sem;
        credit = cre;
        year = ye;
        section = sec;
        olevel = ol;
        sname = sn;
        alevel = al;
        cname = cn;
}

//Destructor

        ~Student(){}

////Setter Method

        void setUniversity_name(string uname){

                university_name = uname;
        }

        void setDepartment(string dept){

                department = dept;
        }

        void setStudent_id(string stid){

                student_id = stid;
        }

        void setCgpa(string cg){

                cgpa = cg;
        }

        void setSemster(string sem){

                semster = sem;
        }

        void setCredit(string cre){

                credit=cre;
        }

        void setYear(string ye){

                year = ye;
        }

        void setSection(string sec){

                section = sec;
        }

        void setOlevel(string ol){

                olevel = ol;
        }

        void setSname(string sn){

                sname  = sn;
        }

        void setAlevel(string al){

                alevel = al;
        }

        void setCname(string cn){

                cname = cn;
        }

//Getter Method

        string getUniversity_name()  {return university_name;}
        string getDepartment()       {return department;}
        string getStudent_id()       {return student_id;}
        string getCgpa()             {return cgpa;}
        string getSemster()          {return semster;}
        string getCredit()           {return credit;}
        string getYear()             {return year;}
        string getSection()          {return section;}
        string getOlevel()           {return olevel;}
        string getSname()            {return sname;}
        string getAlevel()           {return alevel;}
        string getCname()            {return cname;}


//Show function for Student Child Class

void    showStudent(){

        cout<<" ------ Student Class ----------"<<endl;
        cout<<""<<endl;
        cout<<" ------ Student Information ------"<<endl;
        cout<<"Name                             : "<<name<<endl;
        cout<<"University Name                  : "<<university_name<<endl;
        cout<<"Department                       : "<<department<<endl;
        cout<<"Student ID                       : "<<student_id<<endl;
        cout<<"Section                          : "<<section<<endl;
        cout<<"CGPA                             : "<<cgpa<<endl;
        cout<<"Semster                          : "<<semster<<endl;
        cout<<"Credit Completed                 : "<<credit<<endl;
        cout<<"Year                             : "<<year<<endl;
        cout<<endl;
        cout<<" ------ Student Academic Information ------"<<endl;
        cout<<""<<endl;
        cout<<"O-Level Result                   :"<<olevel<<endl;
        cout<<"School Name                      :"<<sname<<endl;
        cout<<"A-level Result                   :"<<alevel<<endl;
        cout<<"College Name                     :"<<cname<<endl;
        cout<<endl;
        cout<<" ------ Personal Information ------"<<endl;
        cout<<""<<endl;
        cout<<"Date of Birth                    : "<<dob<<endl;
        cout<<"Age                              : "<<getAge()<<endl;
        cout<<"Gender                           : "<<gender<<endl;
        cout<<"Blood Group                      : "<<b_grp<<endl;
        cout<<"National ID                      : "<<nation_id<<endl;
        cout<<"Martial Status                   : "<<m_status<<endl;
        cout<<"Address                          : "<<address<<endl;
        cout<<"Contact No                       : "<<contact_no<<endl;
        cout<<"Email ID                         : "<<email_id<<endl;

}
};

//Graduate child class inherits student class

class Graduate : public Student

{
//data member of graduate
//Access modifiers

public:

//Public variable

        string uni_name,dept_2,student_id_grade,cgpa_2,duration,major,theisis,job;

 //Graduate parametrized constructor : Student variable

Graduate(string n,string d, int a,string g,string b,string h,string w,string st,string m,string na,string nid,
        string ad,string ph,string eid,string uname,string dept,string stid,string cg,string sem,string cre,
        string ye,string sec,string ol,string sn,string al,string cn,string uname2,string dept2,string stid2,
        string cg2,string dur,string maj,string the,string jo):Student(n,d,a,g,b,h,w,st,m,na,nid,ad,ph,eid,
                                                                uname,dept,stid,cg,sem,cre,ye,sec,ol,sn,al,cn)
        {

            uni_name = uname2;
            dept_2 = dept2;
            student_id_grade = stid2;
            cgpa_2 = cg2;
            duration = dur;
            major = maj;
            theisis = the;
            job = jo;

        }

//Setter Method

            void setUni_name(string uname2){

                uni_name = uname2;
            }

            void setDept_2(string dept2){

                dept_2 = dept2;
            }

            void setStudent_id_grade(string stid2){

                student_id_grade = stid2;
            }

            void setCgpa_2(string cg2){

                cgpa_2 = cg2;
            }

            void setDuration(string dur){

                duration = dur;
            }

            void setMajor(string maj){

                major = maj;
            }

            void setTheisis(string the){

                theisis = the;
            }

            void setJob(string jo){

                job = jo;
            }

//Getter Method

        string getUni_name()            {return uni_name;}
        string getDept_2()              {return dept_2;}
        string getStudent_id_grade()    {return student_id_grade;}
        string getCgpa_2()              {return cgpa_2;}
        string getDuration()            {return duration;}
        string getMajor()               {return major;}
        string getTheisis()             {return theisis;}
        string getJob()                 {return job;}


//Show Function for Graduate child class

void showGraduate(){

        cout<<" ------ Graduate Class ----------"<<endl;
        cout<<""<<endl;
        cout<<" ------ Graduate Information ------"<<endl;
        cout<<""<<endl;
        cout<<"Name                             : "<<name<<endl;
        cout<<"University Name                  : "<<uni_name<<endl;
        cout<<"Department                       : "<<dept_2<<endl;
        cout<<"Student ID                       : "<<student_id_grade<<endl;
        cout<<"CGPA                             : "<<cgpa_2<<endl;
        cout<<"Duration                         : "<<duration<<endl;
        cout<<"Major Subject                    : "<<major<<endl;
        cout<<"Theisis Topic                    : "<<theisis<<endl;
        cout<<"Job Experience                   : "<<job<<endl;
        cout<<""<<endl;
        cout<<" ------ Undergraduate Information ------"<<endl;
        cout<<""<<endl;
        cout<<"Name                             : "<<name<<endl;
        cout<<"University Name                  : "<<university_name<<endl;
        cout<<"Department                       : "<<department<<endl;
        cout<<"Student ID                       : "<<student_id<<endl;
        cout<<"Section                          : "<<section<<endl;
        cout<<"CGPA                             : "<<cgpa<<endl;
        cout<<"Semster                          : "<<semster<<endl;
        cout<<"Credit Completed                 : "<<credit<<endl;
        cout<<"Year                             : "<<year<<endl;
        cout<<endl;
        cout<<" ------ School & College Information ------"<<endl;
        cout<<""<<endl;
        cout<<"O-Level Result                   :"<<olevel<<endl;
        cout<<"School Name                      :"<<sname<<endl;
        cout<<"A-level Result                   :"<<alevel<<endl;
        cout<<"College Name                     :"<<cname<<endl;
        cout<<endl;
        cout<<" ------ Personal Information ------"<<endl;
        cout<<""<<endl;
        cout<<"Date of Birth                    : "<<dob<<endl;
        cout<<"Age                              : "<<getAge()<<endl;
        cout<<"Gender                           : "<<gender<<endl;
        cout<<"Blood Group                      : "<<b_grp<<endl;
        cout<<"National ID                      : "<<nation_id<<endl;
        cout<<"Martial Status                   : "<<m_status<<endl;
        cout<<"Address                          : "<<address<<endl;
        cout<<"Contact No                       : "<<contact_no<<endl;
        cout<<"Email ID                         : "<<email_id<<endl;

}
};

int main(){

//Person object calling

Person p1("Narmeen","22-03-1998", 24,"Female","A(+)","5'4 ","58 KG","Fair","Single","Bangladeshi",
          "223-343-2345","182/2 East Rampura Dhaka","01823734543","narmeen@gmail.com");

        p1.showPerson();
        cout<<""<<endl;

//Student object calling

Student s1("Faria Subha","29-10-1992",30,"Female","A(+)","5'3","0","0","Married","0","432-234-2342",
        "Mirpur DOHS , House 23 ,Flat 3A","017231234324","subha@gmail.com","American International University Bangladesh-(AIUB)",
        "BBA","12-207531","3.50","12","142","2012-2016","A","A* in 5 Subjects","Scholastica ","A* in 3 Subjects","Scholastica");

        s1.showStudent();
        cout<<""<<endl;

//Graduate object calling

Graduate g1("Faria Subha","29-10-1992",30,"Female","A(+)","5'3","0","0","Married","0","432-234-2342",
        "Mirpur DOHS , House 23 ,Flat 3A","017231234324","subha@gmail.com","American International University Bangladesh-(AIUB)",
        "BBA","12-207531","3.50","12","142","2012-2016","A","A* in 5 Subjects","Scholastica ","A* in 3 Subjects","Scholastica",
        "Dhaka University","MBA","ZR-66","4.00","2 Years","Human Resources Management","Leadership & HR management",
        "2 Years");

        g1.showGraduate();
        cout<<endl;

//Employee object calling

Employee e1("Nazmul","04-12-1987",0,"Male","A(-)","5'11","0","0","Married","0","228-324-2134",
            "115, Azimpur Road (1st Floor), Lalbagh, 1211","01711454444","nazmul@gmail.com",
                        "EN0234","IT","Junior Developer","9AM - 5PM","25000 BDT","22-03-2019");

        e1.showEmployee();
        cout<<""<<endl;

//Officer object calling

Officer o1("Syed","04-12-1977",0,"Male","O(-)","5'9","0","0","Married","0","458-624-7634",
           "Block-K, (4th Floor), Banani, 1213","016114344564","mahadi@gmail.com","OF121","NA",
            "CEO","10AM - 6PM","250000 BDT","22-03-2019","Schamberger Group");

        o1.showOfficer();
        cout<<""<<endl;

//Faculty object calling

Faculty f1("Abir Ahmed","02-02-1989", 0,"Male","O(+)","0","0","0","Married","0","231-234-2345",
           "244/1,Ibrahimpur(5th floor),Cantonment,1206","01711238897","abir@gmail.com","FA002312",
            "Faculty Of Science & Technology,FST","Lecturer,CS","8AM-5PM","40000 BDT","21-03-2021",
            "American International University Bangladesh-(AIUB)","Msc,Bsc,HSC,SSC");

        f1.showFaculty();
        cout<<""<<endl;

return 0;
}
