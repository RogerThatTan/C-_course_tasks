//1.	Take N integers as input and display prime and not prime for each of the integer.

#include<iostream>
using namespace std;
int main(){

int n,num,I,i;
cout<<"Input N Integer"<<endl;
cin>>n;
int numbers[n]={};
cout<< "Input "<<n<<" different number with space: ";
for(I=0;I<n; ++I)
{
    cin>>numbers[I];
}
for(I=0;I<n;++I){

    num=numbers[I];
    bool Prime=true;
    if(num==0 || num==1)
    {
        Prime = false;
    }
for(i=2; i<num; i++)
    {
    if(num%i==0)
    {
        Prime=false;
        break;
    }
    }
        if(Prime==true){
            cout<<num<<" is a Prime Number"<<endl;
        }
        else{
            cout<<num<<" is not a Prime Number"<<endl;
        }

}
return 0;
}
