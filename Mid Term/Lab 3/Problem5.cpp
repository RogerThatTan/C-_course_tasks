//5.Write a C++ program to find the smallest and second smallest elements in a given array of integers.

#include<iostream>
using namespace std;
    int main(){

    int elemnet[5],temp ;

    for(int i=0; i<5; i++){
        cout<< "Enter Different Number : ";
        cin>> elemnet[i];
    }
    for(int i=0; i<5; i++){
        cout<< elemnet[i]<<" "<<endl;
    }

    int max_1, max_2;
    max_1 = elemnet[0];
    max_2 = elemnet[1];

    if(max_1<max_2){

        temp = max_1;
        max_1 = max_2;
        max_2 = temp;
    }

    for(int i=0;i<5;i++){
            if(elemnet[i]<=max_1){
                  max_2 =  max_1;
             max_1 = elemnet[i];
            }

            else if( elemnet[i]<= max_2 ){
                max_2 = elemnet[i];
        }

}
    cout<<"Smallest Element: "<< max_1<<endl;

    cout<<"Second Smallest Element: "<< max_2<<endl;


return 0;
}
