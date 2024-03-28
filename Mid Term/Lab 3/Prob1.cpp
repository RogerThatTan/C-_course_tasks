//1. Take N numbers as input from user and print them in reverse order.

#include<iostream>
using namespace std;
int main(){

int n;
cout<<"Input Index Limit"<<" : ";
cin>> n;
int number[n];

for(int i=0; i<n; i++){

    cout<< "Input Number "<< i+1<< " = ";
    cin>>number[i];

}
    cout<<"Numbers Are: ";
    for(int i=0; i<n; i++){
        cout<<number[i]<<" ";
    }

    cout<<"Reverse Numbers: ";
    for(int i=n-1; i>=0; --i){
        cout<<number[i]<<" ";
    }

return 0;
}

