#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    int f_n=1;
    int i;
    cout<< "Enter The Number: ";
    cin>> n;

    for(i=1; i<=n; i++){
            f_n=f_n*i;
    }
    cout<<n<<"!"<< "="<<f_n<<endl;

return 0;
}

