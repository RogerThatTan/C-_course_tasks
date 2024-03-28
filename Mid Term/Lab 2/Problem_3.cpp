#include <iostream>
using namespace std;
int main(){

    int n_1;
    int n_2;
    int s;

    cout<<"Input The Number: ";
    cin>> n_1;

    n_2=n_1;
    s = 0;

    while(n_2!=0){

        s = s + n_2 % 10;
        n_2= n_2 / 10;
    }
        cout<<"Sum of The Input Numbers Are : "<<s;

return 0;
}
