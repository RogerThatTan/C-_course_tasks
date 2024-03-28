#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int f_n;
    int s_n;
    int sum =0;
    int i;
    cout<< "First Number: ";
    cin>> f_n;
    cout<< "Second Number: ";
    cin>> s_n;

    for (i=f_n+1;i<s_n;i++){
    if(i%2 == 0){
        sum += i;
    }
}
    cout<<"The Sum of All Even Number Between "<<f_n<<" "<<'&'<<" "<<s_n<<" is "<<sum<<endl;

return 0;
}
