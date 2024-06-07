#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int n=10;
    for(int i=0; i<n; i++){
       cout<<"enter the value for index  "<<i << ": ";
       cin>>arr[i];
       cout<<endl;
    }
     cout<<"double of an  array is "<<endl;
    for(int i=0; i<n; i++){
       arr[i]=2*arr[i];
        cout<<arr[i]<<" ";
    }
   
    }