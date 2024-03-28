//Write a program in C++ to create and display unique three-digit number using 1, 2, 3, 4. Also count how many three-digit numbers are there.
#include<iostream>
using namespace std;
int main(){
cout<<"The three-digit numbers are: "<<endl;
int a = 0;

    for(int i = 1; i <= 4; i++)
{
	for(int j = 1; j <= 4; j++)
{
	for(int k = 1; k <= 4; k++)
{
	if(k != i && k != j && i != j)
{
	a++;
	cout<<i <<j<<k<<" ";
                       }

                       }

                       }

                       }

	cout<<endl<<"Total number of the three-digit-numbers are: "<<a<<endl;
return 0;
}
