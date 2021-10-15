#include<iostream>
using namespace std;
class Student{
    int age;
    public:
    //default constructor
    Student(){
        cout<<"Constructor called"<<endl;
    }

    //peramiterised constructor
    Student(int r){
        cout<<"Constructor 2 called"<<endl;
        rollNumber = r;
    }

    int rollNumber;

    void display(){
        cout<<age<<" "<<rollNumber<<endl;
    }
    int getAge(){
        return age;
    }
    void setAge(int a){
        age = a;
    }
};
