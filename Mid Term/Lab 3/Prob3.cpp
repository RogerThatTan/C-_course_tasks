//Take N integers as input and display Even and Odd for each of the integer.
#include<iostream>
using namespace std;
int main(){

int N,i,a[50];

    cout<< "Enter N Numbers: ";
    cin>>N;
    cout<<"Enter " << N << " Numbers With Space: ";
    for(i=0; i<N; i++){
        cin >> a[i];
    }
    cout<<"\nEven Numbers: ";
    for(i=0; i<N;i++){
        if (a[i]%2==0)
            cout<< " "<<a[i];
    }

    cout<<"\nOdd Numbers: ";
    for(i=0; i<N;i++){
        if (a[i]%2==1)
            cout<< " "<<a[i];
    }

return 0;
}
