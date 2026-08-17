#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;

   int sum=0;
   int count =0;

   while(n>0){
    int digit=n%10;
    sum=sum+digit;

    count++;
    n=n/10;
   }

    cout<<"sum: "<<sum<<endl;
    cout<<"count: "<<count<<endl;

    return 0;
}