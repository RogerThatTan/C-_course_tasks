#include<iostream>
using namespace std;
int main()
{
    int n_1;
    int n_2;
    int gcd;
    int i;

    cout<< "Input The First Number: ";
    cin >> n_1;
    cout<< "Input The Second Number: ";
    cin >> n_2;

for (i = 1; i <= n_1 && i <= n_2; i++)
    {if(n_1 % i == 0 && n_2 % i == 0)
    {gcd = i;
        }
    }
    cout << "The Greatest Common Divisor: " << gcd << endl;
return 0;
}
