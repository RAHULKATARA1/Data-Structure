#include<iostream>
using namespace std;
void printarray(int arr[], int size){
    int n=7;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size=7;
    printarray(arr , size);
    return 0;
}