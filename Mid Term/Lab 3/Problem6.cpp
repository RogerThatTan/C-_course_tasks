//6.Write a C++ program to take N characters but only output the vowels from those characters.

#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Input Array Limit:  ";
    cin>> n;


    char chara[n]={};
    cout<<"Input The Array Index = ";
    for(int i=0; i<n; i++){
        cin>>chara[i];
}


    for(int i=0; i<n; i++){

    if(chara[i]=='A' || chara[i]=='E' || chara[i]=='I' || chara[i]=='O' || chara[i]=='U' || chara[i]=='a' || chara[i]=='e' ||
    chara[i]=='i' || chara[i]=='o' || chara[i]=='u' ){

     cout<<"The Vowels Are : "<< chara[i]<<endl;

    }
}
return 0;
}
