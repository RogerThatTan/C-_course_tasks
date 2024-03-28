#include<iostream>
#include<math.h>
using namespace std;

int main(){

    float m;
    float h;

        cout<< "Input Users Weight (KG): ";
        cin>> m;
        cout<< m << "KG"<<endl;

        cout<< "Height(m): ";
        cin>> h;
        cout<< h << "m"<<endl;

    float result;
        result = m/(h*h) ;
        cout<< "BMI = "<< result<< "kg/m^2" << endl;

return 0;
}
