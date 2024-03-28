#include<iostream>
using namespace std;
int main(){

int n, sum, temp,r;

cout<<"Input 10 digits integer number : ";
cin>>n;

sum = 0;
temp = n;


while(temp != 0){
    r =temp % 10;
    sum= sum*10+r;
    temp=temp/10;
}

int output = sum;

























return 0;
}

