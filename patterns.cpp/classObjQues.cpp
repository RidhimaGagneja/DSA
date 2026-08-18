#include<iostream>
using namespace std;

class Student
{
    public:  // access specifier

    string name;
    int rollno;
    float marks;
    
    void display(){
    cout<<"name: "<<name<<endl<<"Rollno:"<<rollno<<endl<<"marks: "<<marks<<endl;
}
};

int main(){
    Student s1;
    Student s2;

    cout<<"enter name of s1, rollno, marks"<<endl;
    cin>>s1.name>>s1.rollno>>s1.marks;


    cout<<"enter name of s2, rollno, marks"<<endl;
    cin>>s2.name>>s2.rollno>>s2.marks;


    s1.display();
    s2.display();
    return 0;
}