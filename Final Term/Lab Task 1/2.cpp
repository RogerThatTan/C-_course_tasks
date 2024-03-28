//Write a program to print the area of a rectangle by creating a class named 'Rectangle' using setter and
//getter method, set and get values of its length and breadth and a function named 'getArea' which
//returns the area of the rectangle. Length and breadth of the rectangle are entered through keyboard.
//You must use private properties and public constructor, and methods for this class.

#include<iostream>
using namespace std;

class Rectangle{

private:
    float length , breadth;
public :

    //Empty Constructor

    Rectangle(){

    length = 0;
    breadth = 0;

    }

    //Para Constructor

Rectangle(float l,float b){

    length =l;
    breadth = b;

}

~Rectangle(){

}
    //Setter
void setLength(float l){

    length = l;

}

    //Getter

float getLength(){

    return length;

}
    //Setter

void setBreadth(float b){

    breadth = b;

}
    //Getter

float getBreadth(){

    return length;

}
    //Getter

float getArea(){

    return length*breadth;

}

    //Display Function

void showDetails(){

    cout<<"\nLength is "<<length<<endl;
    cout<<"\nBreadth is "<<breadth<<endl;
    cout<<"\nArea of Rectangle is "<<getArea()<<endl;

}

};

    //Main BODY

int main(){

float l,b;
    cout<<"Input Length: ";
        cin>>l;


    cout<<"\nInput Breadth: ";
        cin>>b;

Rectangle r1(l,b);
    r1.showDetails();


return 0;
}
