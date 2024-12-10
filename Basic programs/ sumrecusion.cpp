#include<iostream>
using namepace std;
int sum(int n);
int main() {
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int sum = sum(n);
    cout<<"The sum is :"<<sum;

}
int sum(int n){
    int n;
    int sum = 0;
    sum = sum +n;
    return sum;
}