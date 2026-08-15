#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;

    int f=0;

    while(n>0){
        int ld=n%10;
        f=f*10;
        f=f+ld;
        n=n/10;
    }

    cout<<f;
}