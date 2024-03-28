//2. Take N Student marks as input and find the summation and average of the marks.
#include<iostream>
using namespace std;
int main(){


        int n,sum=0;
        cout<< "Input The Number Of Student : ";
        cin>> n;

        int student[n];

        for(int i=0; i<n; i++){
            cout << "Input Marks For Student " <<i+1<< " = ";
            cin >> student[i];
            sum = sum + student[i];

        }
            cout<<"Summation of Marks : "<<sum<<endl;
            float avg = (float)sum/n;
            cout<<"Average Marks"<<": "<<avg<<endl;

return 0;
}
