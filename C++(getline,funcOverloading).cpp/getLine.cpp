// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// string name;

// //cin>>name;
// //cout<<name;

// getline(cin,name);
// cout<<name;
// return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;


// int calculate(int a,int b){
//     cout<<"enter a: ";
//     cin>>a;
//     cout<<"enter b: ";
//     cin>>b;
//     int sum=a+b;
//     return sum;

// }

// double calculate(double a, double b){
//     cout<<"enter a: ";
//     cin>>a;
//     cout<<"enter b: ";
//     cin>>b;
//     double sum=a+b;
//     return sum;
// }

// int calculate(int a,int b,int c){
//     cout<<"enter a: ";
//     cin>>a;
//     cout<<"enter b: ";
//     cin>>b;
//     cout<<"enter c: ";
//     cin>>c;

//     int sum=a+b+c;
//     return sum;


// }

// void displayMessage(string message="Calculation Completed"){
//     cout<<message;

// }
// int main(){
//     cout<<calculate(0,0)<<endl;
//     cout<<calculate(0.0,0.0)<<endl;
//     cout<<calculate(0,0,0)<<endl;
//     displayMessage();
// }

#include<bits/stdc++.h>
using namespace std;

int calculate(int a, int b){
    return a+b;
}
double calculate(double x ,double y){
    return x+y;
}

int calculate(int a, int b,int c){
    return a+b+c;
}
void displayMessage(string message="Calculation Completed"){
     cout<<message;
}

int main(){
    int a,b,c;
    double x,y;

    cout<<"enter a and b: ";
    cin>>a>>b;
    cout<<"enter x and y: ";
    cin>>x>>y;


    cout<<"enter a , b and c: ";
    cin>>a>>b>>c;

    cout<<calculate(a,b)<<endl;
    cout<<calculate(x,y)<<endl;
    cout<<calculate(a,b,c)<<endl;
    displayMessage();

    return 0;
}
