#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    int roll_name;

    Student(string a ,int b,int c){
        name=a;
        age=b;
        roll_name=c;
    }


void display_info(){
    cout<<"NAME IS "<<name<<endl;
    cout<<"AGE IS "<<age<<endl;
    cout<<"Roll no IS "<<roll_name<<endl;
  }
}
int main(){
    Student s1("Amit",24,78);
    s1.display_info;
}