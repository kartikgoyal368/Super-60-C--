#include<iostream>
using namespace std;
int main() {
    int n,rev = 0,rem;
    cout<<"Enter The number : ";
    cin>>n;
    while(n!=0){
        rem = n%10;
        rev = rev * 10 + rem;
        n = n/10;
    }
    cout<<"Reversed number is : "<<rev;
    
}