//6.	Write a program in C++ to convert a decimal number to hexadecimal number


#include<iostream>
using namespace std;
int main(){

    int num, rem, temp, i, j=0;
    char hexa[100];
    cout << "Input Any Decimal Number : ";
    cin>> num;
    temp = num;
    while(temp>0)

{
    rem = temp % 16;
    if(rem < 10 ) {
        hexa[j++] = 48+rem;
    }
    else
        hexa[j++] = 55+rem;
        temp = temp/16;
}

    for(i=j-1;i>=0;i--)
    {
        cout<<hexa[i];
    }

return 0;
}
