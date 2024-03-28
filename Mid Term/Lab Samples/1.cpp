#include<iostream>
using namespace std;
int main(){


float cg;
int n , gd, cd;

cout<<"Input your CGPA: ";
cin>>cg;

cout<<"\nInput the number of grade if lower than B+: ";
cin>>gd;


cout<<"\nInput the number of course drop: ";
cin>>cd;

if(cg>=3.75 && gd ==0 && cd ==0){

    cout<<"\nCongratulations!!! You are applicable for 45% Scholarships.\n";
}

else if(cg>=3.65 && gd ==0 && cd <=1 ){

    cout<<"\nCongratulations!!! You are applicable for 20% Financial AID.\n";
}

else if(cg>=3.50 && gd <=2 && cd <=3 ){

    cout<<"\nCongratulations!!! You are applicable for 10% Financial AID.\n";
}
else{
    cout<<"\nSorry!!! You are not applicable for any scholarships and Financial AID.\n";
}

return 0;
}
