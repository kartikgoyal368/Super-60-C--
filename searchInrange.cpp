
#include<iostream>
using namespace std;
int main() {
    int start=0,end,i,element;
    cout<<"Enter the End Range: "<<endl;
    cin>>end;
    cout<<"Element to be searched"<<endl;
    cin>>element;
    if(element>=0 && element<=end){
        cout<<"Yes it exists."<<endl;
    }
    else{
        cout<<"Not exists"<<endl;
    }
}
