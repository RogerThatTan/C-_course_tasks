//5.	Write a program in C++ to display the pattern like a diamond.

#include<iostream>
using namespace std;
int main(){

    int n, i, row, col;
    cout<<"Input The Number Of Rows: ";
    cin>> n;
for(row=1;row<=n;row++){
    for(col=1;col<=n-row;col++)
       cout<<" ";
           for(col=1;col<=row;col++)
            cout<<"*";
            for(col=row-1;col>=1;col--)
            cout<<"*";
            cout<<"\n";
}
for(row=n-1;row>=1;row--){
    for(col=1;col<=n-row;col++)
       cout<<" ";
           for(col=1;col<=row;col++)
            cout<<"*";
            for(col=row-1;col>=1;col--)
            cout<<"*";
            cout<<"\n";
}
return 0;
}
