#include<iostream>
#include<math.h>
using namespace std;

int main(){
        int ProductNumber;
        int Quantity;


        double product1;
        double product2;
        double product3;
        double product4;
        double product5;
        double price;

        product1 = 200.75;
        product2 = 345.50;
        product3 = 775.75;
        product4 = 400.35;
        product5 = 1200.75;

                cout<<"Input Product Number: ";
                cin>>ProductNumber;
                cout<<"Input Product Quantity: ";
                cin>>Quantity;

switch (ProductNumber) {

        case 1:
                price = product1 *  Quantity;
                cout<<"Total Amount: BDT "<<price<<endl;
                break;

        case 2:
                price = product2 *  Quantity;
                cout<<"Total Amount: BDT "<<price<<endl;
                break;

        case 3:
                price = product3 *  Quantity;
                cout<<"Total Amount: BDT "<<price<<endl;
                break;

        case 4:
                price = product4 *  Quantity;
                cout<<"Total Amount: BDT "<<price<<endl;
                break;

        case 5:
                price = product5 *  Quantity;
                cout<<"Total Amount: BDT "<<price<<endl;
                break;

        default:
                cout<<"Invalid Product Number"<<endl;}
                cout<< "Retail Value of Products Sold BDT "<<price<<endl;

return 0;
}
