#include<iostream>
using namespace std;
int fact(int n);
int main() {
    int n,f;
    cout<<"Enter the number : ";
    cin>>n;
    f = fact(n);
    cout<<"the factorial is : "<<f;
    return 0;
}
int fact (int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}