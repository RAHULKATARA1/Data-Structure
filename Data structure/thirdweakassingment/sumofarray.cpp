#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int n=10;
    int sum=0;
     cout<<"enter the value for index  "<< ": ";
    for(int i=0; i<n; i++){
      
       cin>>arr[i];
       
    }
     cout<<"sum of array is "<<": ";
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    cout<<sum; 
    cout <<endl;
    return 0;
    }