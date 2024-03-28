#include<iostream>
#include<math.h>
using namespace std;

int main (){
    int num1;
    int num2;

            cout << "Input Two Integer Value: ";
            cin >> num1 >> num2;

    if ( num1 % num2 == 0 )
            cout << num1 << " is a multiple of " << num2 << endl;

    else if ( num1 % num2 != 0 )
            cout << num1 << " is not a multiple of " << num2 << endl;

return 0;
}
