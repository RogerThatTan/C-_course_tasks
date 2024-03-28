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
    cout<<"Width is "<<breadth<<endl;
    cout<<"Height is "<<height<<endl;
    cout<<"Volume is "<<getVolume()<<endl;
    cout<<endl;
    }

    Box operator +(Box b){

    Box c;

    c.setLength(length + b.getLength());
    c.setBreadth(breadth + b.getBreadth());
    c.setHeight(height + b.getHeight());

        return c;

    }

    Box operator *(Box b){

    Box c;

    c.setLength(length * b.getLength());
    c.setBreadth(breadth * b.getBreadth());
    c.setHeight(height * b.getHeight());

        return c;

    }
};

//Main BODY

int main(){

    Box b1(12,9.6,4.2);
        Box b2(8,7.6,2.2);
            b1.showDetails();
                b2.showDetails();
    Box b3=b1+b2;
            b3.showDetails();
    Box b4=b1*b2;
            b4.showDetails();

return 0;
}
