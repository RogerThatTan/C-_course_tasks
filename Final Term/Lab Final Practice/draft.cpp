#include<iostream>
using namespace std;


class Complex{


private: int real , img;

public:

    Complex(){}

    Complex(int r,int i){

    real =r;
    img = i;

    }


    ~Complex(){}


    void setReal(int r)         {real =r;}
    void setImg(int i)          {img = i;}


    int getReal()               {return real;}
    int getImg()                {return img;}

    void showComplex(){

        if(img>0){

            cout<<real<<"+"<<img<<"i"<<endl;
        }

        else if(img<0){

            cout<<real<<img<<"i"<<endl;
        }

        else {

            cout<<real<<endl;
        }


    }

    //Addition

    Complex operator + (Complex b){

        Complex result;
        result.setReal(real+b.getReal());
        result.setImg(img+b.getImg());
        return result;

    }


    Complex operator + (int b){

        Complex result;
        result.setReal(real+b);
        result.setImg(img);
        return result;

    }

//Subtraction

    Complex operator - (Complex b){

    Complex result;
    result.setReal(real-b.getReal());
    result.setImg(img-b.getImg());
    return result;

    }


    Complex operator - (int b){

    Complex result;

    result.setReal(real-b);
    result.setImg(img);
    return result;


    }


//Multiplication

    Complex operator * (Complex b){


        Complex result;
        result.setReal(real*b.getReal()+img*b.getImg()*(-1));
        result.setImg(real*b.getImg()+img*b.getReal());
        return result;


    }


    Complex operator * (int b){

        Complex result;
        result.setReal(real*b);
        result.setImg(img*b);
        return result;


    }











};
int main(){

Complex c1(22,32), c2(32,22);
cout<<"First Complex Number                                 : ";
c1.showComplex();

cout<<"Second Complex Number                                : ";
c2.showComplex();
cout<<endl;
cout<<endl;


cout<<"                 ~~~~~~~~Addition Part~~~~~~~~         "<<endl;

cout<<"Complex + Complex                                    :";
Complex c3 = c1+c2;
c3.showComplex();
cout<<endl;

cout<<"Complex + Int                                        :";
Complex c4 = c1+200;
c4.showComplex();
cout<<endl;

cout<<"Complex + Int                                        :";
Complex c5 = c2+200;
c5.showComplex();
cout<<endl;

cout<<"                 ~~~~~~~~Subtraction Part~~~~~~~~         "<<endl;

cout<<"Complex - Complex                                    :";
Complex c6 = c1-c2;
c6.showComplex();
cout<<endl;

cout<<"Complex - Int                                        :";
Complex c7 = c1-100;
c7.showComplex();
cout<<endl;

cout<<"Complex - Int                                        :";
Complex c8 = c2-100;
c8.showComplex();
cout<<endl;

cout<<"              ~~~~~~~~Multiplication Part~~~~~~~~         "<<endl;

cout<<"Complex * Complex                                    :";
Complex c9 = c1*c2;
c9.showComplex();
cout<<endl;

cout<<"Complex * Int                                        :";
Complex c10 = c1*100;
c10.showComplex();
cout<<endl;

cout<<"Complex * Int                                        :";
Complex c11 = c2*100;
c11.showComplex();
cout<<endl;


return 0;
}
