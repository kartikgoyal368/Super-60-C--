#include<iostream>
using namespace std;
int main() {
int age;
int nationality;
cout<<"Your Age :"<<endl;
cin>>age;
cout<<"If you are Indian press 1 else 0"<<endl;
cin>>nationality;
if(age >= 18 && nationality == 1){
    cout<<"Eligible for voting"<<endl;
}
else{
    cout<<"Not Eligible"<<endl;
}
return 0;
}
