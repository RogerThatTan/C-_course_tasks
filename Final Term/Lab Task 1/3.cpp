//Write a program to print the volume of a box by from a class named Box' use setter and getter method
//to set and get its length, breadth and height. You must use private properties and public constructor,
//destructors, and methods for this class.

#include<iostream>
using namespace std;

class Box{

private:
    float length, breadth, height;

public:

    //Empty Constructor
    Box(){

    length = 0;
    breadth = 0;
    height = 0;
    }

    //Parametarized Constructor

    Box(float l, float b, float h){

    length = l;
    breadth = b;
    height = h;

    }

    //Destructor

    ~Box(){
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
        return breadth;
    }

    //Setter

        void setHeight(float h){
        height = h;
    }

    //Getter

    float getHeight(){
        return height;
    }

    //Getter

    float getVolume(){
        return length*breadth*height;
    }

    //Display Function

    void showDetails(){

    cout<<"Length is "<<length<<endl;
    cout<<"Breadth is "<<breadth<<endl;
    cout<<"Height is "<<height<<endl;
    cout<<"Volume is "<<getVolume()<<endl;
    }

};

//Main BODY

int main(){

    Box b1(12,9.6,4.2);
        b1.showDetails();

return 0;
}
