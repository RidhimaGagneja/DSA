#include<iostream>
using namespace std;

class Rectangle{
    public:
    float length;
    float breadth;

    void input(){
        cout<<"length";
        cin>>length;
        cout<<"breadth";
        cin>>breadth;
    }

    void area(){
        float area;
        area=length*breadth;
        cout<<"area: "<<area<<endl;
    }

    void display(){
        cout<<"length:"<<length<<endl;
        cout<<"breadth:"<<breadth<<endl;
    }
};

    int main(){
        Rectangle r1;
        Rectangle r2;

        r1.input();
        r2.input();

        cout<<"Length of r1:"<<r1.length<<endl<<"Length of r2:"<<r2.length<<endl;
        cout<<"Breadth of r1:"<<r1.breadth<<endl<<"Breadth of r2:"<<r2.breadth<<endl;

        r1.area();
        r2.area();
    }
