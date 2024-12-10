#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Enter the numbers : ";
    cin>>a>>b>>c;
    if((a>b && a>c)){
        cout<<"a is the largest";
    }
    else if((b>a && b>c)){
        cout<<"b is the largest";
    }
    else if((c>a && c>b)){
        cout<<"c is the largest";
    }
    else if(a==b&&a>c||b==c&&b>c||a==c&&a>b){
        cout<<"Two numbers are equally the largest!";
    }
    else{
        cout<<"All numbers are equal!";
    }
    

}