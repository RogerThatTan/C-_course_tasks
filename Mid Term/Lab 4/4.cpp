//4.	Write a program in C++ to display the pattern like right angle triangle using an asterisk.
//Sample Output:
//Input number of rows: 5
//*
//**
//***
//****
//*****


#include<iostream>
using namespace std;
int main(){

int n,i,row,col;
cout<< "Enter Number of Rows: ";
cin>> n;

for(row=1; row<=n; row++){

    for(col=1; col<=row; col++)
    {
        cout<<("*");
    }
    cout<<("\n");
}

return 0;
}
