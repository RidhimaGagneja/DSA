// deletion of array


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=3;i<n;i++){
//         arr[i-1]=arr[i];
//     }
    
//     for(int i=0;i<n-1;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//Insert at the second-last position
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=n-1;i>=4;i--){
        arr[i+1]=arr[i];
    }

    arr[4]=99;

    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
}