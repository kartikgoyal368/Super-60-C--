#include<iostream>
using namespace std;
int findmax(int,int);
int main() {
int a,b;
cout<<"Enter a :";
cin>>a;
cout<<"Enter b :";
cin>>b;
int max,min;
max = findmax(a,b);
cout<<"Maximum is : "<<max;
return 0;

}
int findmax(int a,int b){
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}