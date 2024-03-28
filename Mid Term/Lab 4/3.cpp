//  3.Calculate the Factorial of a number.
//  Sample Output:
//  Your input to calculate factorial: 5
//  Factorial of 5 is 120




#include<iostream>
using namespace std;
int main(){
float i, n, fact=1 ;
    cout<< "Input Any Integer Number To Determine Its Factorial: ";
    cin>> n;
for(i=1; i<=n; i++){
    fact = fact * i;
}
    cout<<"Factorial of "<<n<< " is "<< fact;
return 0;
}
