#include<iostream>
using namespace std;
int main(){
    int arr[6];
    int n=6;
    for(int i=0; i<n; i++){
       cout<<"enter the value for index  "<<i << ": ";
       cin>>arr[i];
       cout<<endl;
    }
     cout<<"enter array is "<<endl;
    for(int i=0; i<n; i++){
       
        cout<<arr[i]<<" ";
    }
   
    }