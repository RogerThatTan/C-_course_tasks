//2.	 Take N integers as input and display Perfect and Not Perfect for each of the integer.

#include<iostream>
using namespace std;
int main(){
int n,i,sum=0;
cout<< "Enter Any Integer Number to Determine Perfect / Non Perfect Number: ";
cin>> n;
for(i=1; i<n;i++){
    if(n%i==0){
        sum=sum+i;}
}
if (sum==n)
    {cout<<n<<" is a Perfect Number "<<endl;
    }
    if (sum != n){
    cout<<n<<" is not a Perfect Number "<<endl;
}
return 0;
}
