#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
    int marks;

    friend void showMarks(Student s);

};

void showMarks(Student s1){
    cout<<"enter the marks"<<endl;
    cin>>s1.marks;
    cout<<"marks is:"<<s1.marks<<endl;
}

int main(){
    Student s1;
    showMarks(s1);
    
}