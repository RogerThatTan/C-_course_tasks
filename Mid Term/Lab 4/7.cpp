//7.	Write a program in C++ to find the frequency of each digit in a given integer.

#include<iostream>
using namespace std;
int main(){

int n, i, j, k, temp;

    cout << "Input any number: ";
    cin >> n;
    for (i = 0; i < 10; i++)
    {
        cout << "The frequency of " << i << " = ";
        temp = 0;
        for (j = n; j > 0; j = j / 10)
        {
            k = j % 10;
            if (k == i)
            {
                temp++;
            }
        }
        cout << temp << endl;
    }

return 0;
}
