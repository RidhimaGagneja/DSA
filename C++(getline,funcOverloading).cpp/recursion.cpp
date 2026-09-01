// // print from 1 to n

// #include<bits/stdc++.h>

// using namespace std;

// void print(int n){
//     if(n==0)
//     return ;

    
//     cout<<n<<endl;;

//     print(n-1);

// }

// int main(){

//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     print(n);


// }
// factorial of n.
// #include<bits/stdc++.h>
// using namespace std;

// int fun(int n){
//     if(n==0)
//     return 1;
//    // cout<<n<<endl;

//     return n*fun(n-1);
    
// }

// int main(){
//       int n;
//     cout<<"enter n: ";
//     cin>>n;
//     cout<<fun(n);

// }



// Fibonacci series
#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n==0 || n==1)
    return n;

    return fibo(n-2)+fibo(n-1);
}

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;

    cout<<fibo(n);
}