#include<iostream>
using namespace std;
int main(){
     int arr[5]={10, 32, 85, 96, 100};
     int n=5;
     int target;
     cin >> target;
     bool flag=0;
     // flag=0-> not found
     // flag=1-> found 
     for(int i=0; i<n; i++){
        if(arr[i]==target){
            //found
            flag =1;
            break;
        }
     }
     if(flag==1){
        cout<<"Target found"<< endl;
     }
     else{
        cout<<"Target not found"<< endl;
     }
}