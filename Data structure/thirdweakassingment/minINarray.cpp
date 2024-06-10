#include<iostream>
#include<limits.h>
using namespace std;
int mininarray(int arr[], int size){
    int minans = INT_MAX;
    for(int i=0; i<size; i++){
        minans = min(arr[i],minans);
    }
    return minans;
}
int main(){
    int arr[]={10,11,13,5,3,20,21,1,9,7};
    int size = 10;
    int minimum = mininarray(arr, size);
    cout<<"Minimum number in an Array is :  "<< minimum << endl;
    return 0;
}