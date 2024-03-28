#include<iostream>
#include<math.h>
using namespace std;

int main(){

            float a;
            float b;
            float c;
            float d;
            float e;

            cout<<"Total kilometers driven per day: ";
            cin>>a;
            cout<<a<<" km"<<endl;

            cout<<"Cost per liter of petrol: ";
            cin>>b;
            cout<<b<<" BDT/L"<<endl;

            cout<<"Average kilometer per liter: ";
            cin>>c;
            cout<<c<<" km/L"<<endl;

            cout<<"Parking fees per day: ";
            cin>>d;
            cout<<d<<" BDT"<<endl;

            cout<<"Tolls per day : ";
            cin>>e;
            cout<<e<<" BDT"<<endl;

            float total;
            total = (a/c*b) + d + e;
            cout<<"Total Driving Cost:"<<" BDT" <<total<<endl;

return 0;
}
