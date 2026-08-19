// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=n-1;i>=2+1;i--){
//         arr[i+1]=arr[i];
        
//     }
//     arr[2]=25;

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
    


// }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=n-1;i>=2;i--){
//         arr[i+1]=arr[i];
//     }
//     arr[2]=25;
    
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//insertion at the beginning

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=n-1;i<=0;i--){
        arr[n+1]=arr[i];
    }
    arr[0]=100;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

