#include<iostream>
using namespace std;
int main() {
    int a[5],min,max;
    cout<<"Enter the elements : ";
    for(int i =0;i<5;i++){
        cin>>a[i];
    }
    min=a[0];
    max=a[0];
    for(int i=0;i<5;i++){
        if(min>a[i]){
            min=a[i];
        }
        else if(max<a[i]){
            max=a[i];
        }
    }
    cout<<"The minimum is : "<<min<<endl;
    cout<<"The maximum is : "<<max;
    
}