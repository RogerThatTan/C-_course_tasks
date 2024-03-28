#include<iostream>
using namespace std;
int main(){

    int num;
    int first = 1;
    int second = 1;
    int next;
    int i;

    cout<< "Enter The N Of Terms For Fibonacci Series: ";
    cin>>num;

    cout<<"Fibonacci Series: "<<endl;

for(i=1; i<=num;i++){
    cout<<first<<endl;
    next=first+second;
    first=second;
    second=next;
}
return 0;
}
