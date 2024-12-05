#include<iostream>
using namespace std;
float Square(float);
int main() {
float n;
cout<<"Enter the number"<<endl;
cin>>n;
float ans = Square(n);
cout<<"Square is : "<<ans<<endl;
}
float Square(float n){
    float sq = n*n;
    return sq;

}