#include<iostream>
using namespace std;
int main()
{
    int d_num;
    int b_num=0;
    int a=1;
    int rem;
    cout<<"Enter the Decimal Number: ";
    cin>>d_num;
    while(d_num>0)
    {
        rem = d_num%2;
        b_num = b_num+(rem*a);
        a = a*10;
        d_num = d_num/2;
    }
    cout<<"Binary Value: "<<b_num;
    return 0;
}
